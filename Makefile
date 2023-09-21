FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = $(wildcard srcs/*.c)
BONUS = $(wildcard srcs/ft_lst*.c)
INCLUDES = includes
OBJ = $(SRC:.c=.o)
BNS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

bonus: $(BNS)
	@ar rcs $(NAME) $(BNS)

%.o: %.c
	@cc $(FLAGS) -c $< -o $@ -I $(INCLUDES)

clean:
	@rm -f $(OBJ) $(BNS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
