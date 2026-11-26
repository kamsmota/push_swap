NAME = push_swap
CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_swap.c 


OBJS = $(SRCS:.c=.o) 
#changes all files .c to .o because the file saves functions, not .c

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re