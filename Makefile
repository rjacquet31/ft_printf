NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I.
FILES = ft_printf.c \
		ft_putchars.c \
		ft_putnbr.c \
		ft_putstrs.c \
		ft_strlen.c \
		ft_print_integer.c \
		ft_print_pointer.c \
		ft_print_unsigned.c \
		ft_print_hex_min.c \
		ft_print_hex_maj.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re