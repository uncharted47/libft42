FLAG = -Wall -Wextra -Werror
NAME = libft.a
SRC = *.c
INCLUDES = libft.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $@ $^
	@ranlib $@

%.o: %.c
	@gcc $(FLAG) -c $< -o $@ -I {INCLUDES}

clean:
	@rm -f $(OBJ)


fclean: clean
	@rm -f $(NAME)


re: fclean all

.PHONY: all clean fclean re
