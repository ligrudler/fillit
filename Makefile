# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/10 19:51:21 by lgrudler          #+#    #+#              #
#    Updated: 2019/01/10 20:33:15 by lgrudler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC = catch_tetri.c \
	  ft_check.c \
	  get_map.c \
	  main.c \
	  optimal_position.c \

HDR = ./fillit.h

LIB = -L./libft/ -lft

OBJET = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -c $(SRC) -I $(HDR)
	gcc $(OBJET) -o $(NAME) -L./libft -lft
clean :
	rm -rf $(OBJET)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
