# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtinani-  <marvin@42.fr>                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 20:39:44 by guilherme         #+#    #+#              #
#    Updated: 2024/07/04 22:12:47 by guilherme        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c\
       ft_putuns.c ft_puthex.c ft_putpointer.c

OBJS = $(FILES:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
HEADER = ft_printf.h
LIBC = ar -rcs
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
