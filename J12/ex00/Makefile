# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwolff <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/28 11:27:14 by hwolff            #+#    #+#              #
#    Updated: 2018/02/28 14:46:18 by hwolff           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c ft_putnbr.c ft_putstr.c ft_putchar.c

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
