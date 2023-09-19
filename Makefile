FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(wildcard srcs/*.c)
INCLUDES = includes
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@cc $(FLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
	@rm -f $(OBJ)


fclean: clean
	@rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
