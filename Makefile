# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/10 19:51:21 by lgrudler          #+#    #+#              #
#    Updated: 2019/01/13 14:53:55 by elindao-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC = get_tetri.c \
	  get_file.c \
	  get_map.c \
	  main.c \
	  get_optimal_position.c \

HDR = ./fillit.h

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
