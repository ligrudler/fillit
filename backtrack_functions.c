/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:22:27 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/14 16:50:15 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_placement(char **map, char *block, int size, t_pos *pos)
{
	int		line;
	int		col;
	int		verif;

	line = 0;
	verif = 0;
	while (line < 4 && line + pos->y < size)
	{
		col = 0;
		while (col < 4 && col + pos->x < size)
		{
			if ((ft_isupper(map[line + pos->y][col + pos->x]))
					&& ft_isupper(block[line * 4 + col]) != 0)
				return (0);
			if (ft_isupper(block[line * 4 + col]) != 0)
				verif++;
			col++;
		}
		line++;
	}
	if (verif == 4)
		return (1);
	return (0);
}

void	put_block(char **map, char *block, int size, t_pos *pos)
{
	int		line;
	int		col;

	line = 0;
	while (line < 4 && line + pos->y < size)
	{
		col = 0;
		while (col < 4 && col + pos->x < size)
		{
			if (ft_isupper(block[line * 4 + col]) == 1)
				map[pos->y + line][pos->x + col] = block[line * 4 + col];
			col++;
		}
		line++;
	}
}

void	erase_block(char **map, char *block, int size, t_pos *pos)
{
	int		line;
	int		col;

	line = 0;
	while (line < 4 && line + pos->y < size)
	{
		col = 0;
		while (col < 4 && col + pos->x < size)
		{
			if (ft_isupper(block[line * 4 + col]) == 1)
				map[pos->y + line][pos->x + col] = '.';
			col++;
		}
		line++;
	}
}
