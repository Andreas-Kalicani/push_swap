# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akalican <akalican@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 13:05:09 by akalican          #+#    #+#              #
#    Updated: 2023/10/17 14:32:16 by akalican         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC=gcc

CFLAGS= -Wall -Wextra -Werror

TARGETS=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr_fd.c ft_lstclear.c ft_split.c ft_strchr.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
ft_strncmp.c ft_strndup.c ft_strnstrn.c ft_strrchr.c  ft_strtrim.c ft_substr.c \
ft_tolower.c ft_toupper.c \

BONUS=ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c

OBJS = $(TARGETS:.c=.o)

OBJSBONUS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
				ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJSBONUS)
	  ar rc $(NAME) $(OBJSBONUS) $(OBJS)

clean: 
		rm -rf $(OBJS) $(OBJSBONUS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

