/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 17:23:03 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/12 16:58:47 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# define BUFF_SIZE 600
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> //

typedef struct		s_pos
{
	int x;
	int y;
}					t_pos;

int		check_pattern(char *str);
int		check_newline(char *str);
int		check_contact(char *str);
int		check_file(char *str);
char	*get_file(const char *file);
int		count_tetri(char **tab);
char	*erase_newline(char *str);
char	**stock_tetri(char *nstr);
char	**get_tetri(char *str);
char	**new_position(char **tab);
int		check_special_pattern(char *block);
int		min_grid_size(int tetri);
char	**get_map(int size);


#endif
