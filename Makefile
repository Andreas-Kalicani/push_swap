NAME = push_swap
CC = gcc
TARGETS = push_swap.c check_max_min_a.c input_error.c executing.c push_a_to_b.c push_b_to_a.c rev_rotate.c rotate.c swap.c utils.c utils_2.c ft_add_back_a.c ft_free.c ft_freestr.c ft_sort_three.c ft_split.c utils3.c utils4.c utils5.c
CFLAGS = -Wall -Wextra -Werror
OBJS = $(TARGETS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re