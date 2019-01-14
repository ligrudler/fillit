# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/10 19:51:21 by lgrudler          #+#    #+#              #
#    Updated: 2019/01/14 17:06:07 by elindao-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC = get_tetri.c \
	  get_file.c \
	  get_map.c \
	  main.c \
	  get_optimal_position.c \
	  backtrack_functions.c \
	  backtrack_solver.c \

HDR = ./fillit.h

OBJET = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJET) $(HDR)
	@make -C ./libft/ all
	@gcc $(FLAGS) -c $(SRC) -I $(HDR) 
	@gcc $(OBJET) -o $(NAME) -L./libft -lft
clean :
	@make -C ./libft/ clean
	@rm -rf $(OBJET)

fclean : clean
	@make -C ./libft/ fclean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
