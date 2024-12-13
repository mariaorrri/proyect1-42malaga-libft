# VARIABLES
CC = cc
CFLAGS = -Wall -Wextra -Werror
LEAKS = -fsanitize=address
NAME = libft.a
SRC = $(shell find . -name "ft_*.c" ! -name "ft_lst*.c")
BONUS_SRC = $(shell find . -name "ft_lst*.c")
OBJTS = $(SRC:.c=.o)
BONUS_OBJTS = $(BONUS_SRC:.c=.o)

# RULES
all: $(NAME)
$(NAME): $(OBJTS)
	ar rcs $(NAME) $(OBJTS)

bonus: $(BONUS_OBJTS)
	ar rcs $(NAME) $(BONUS_OBJTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJTS) $(BONUS_OBJTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re