# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 13:42:01 by gyasuhir          #+#    #+#              #
#    Updated: 2024/10/12 13:57:25 by gyasuhir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MAIN = srcs/main.c

FILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADER = includes/*.h

FLAGS: -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc $(FLAGS) $(FILES) -o $(NAME) $(MAIN)

clean:


fclean:
	make clean
	rm -rf $(NAME)

re:
	make fclean
	make
