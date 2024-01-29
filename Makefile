NAME = push_swap.a
CC = gcc
TARGETS = push_swap.c check_cheapest.c check_max_min_a.c check_max_min_b.c input_error.c linked_list_a.c linked_list_b.c push_a_to_b.c push_b_to_a.c rev_rotate.c rotate.c swap.c utils.c utils_2.c 
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