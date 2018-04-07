# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwolff <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/24 17:22:53 by hwolff            #+#    #+#              #
#    Updated: 2018/02/27 14:35:03 by hwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRCDIR = ./srcs/

SRCS = $(addprefix $(SRCDIR), $(SRC)) 

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADERPATH = ./includes/

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@.a $^ && ranlib $@.a

$(OBJS) : $(SRCS)
	$(CC) -c $(CFLAGS) $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME).a

re: fclean all
