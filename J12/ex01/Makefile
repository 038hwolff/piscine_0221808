# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwolff <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/28 11:27:14 by hwolff            #+#    #+#              #
#    Updated: 2018/02/28 15:16:57 by hwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRCS = ft_cat.c ft_putnbr.c ft_putstr.c ft_putchar.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
