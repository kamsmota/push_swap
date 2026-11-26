NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I libft

SRCS = ft_printp.c ft_conversion.c ft_choice.c ft_printc.c \
       ft_printnbr.c ft_printf.c ft_printstr.c ft_countdigits.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	make -C libft
	ar rcs $(NAME) $(OBJS)
	ar rcs libftprintf.a libft/*.o

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re