/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_optimal_position.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:07:55 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/15 15:55:49 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_special_pattern(char *block)
{
	int		i;

	i = 0;
	while (block[i] != '#')
		i++;
	if (block[i + 3] == '#' && block[i + 4] == '#' && block[i + 7] == '#'
			&& i < 8)
		return (1);
	if (block[i + 1] == '#' && block[i + 3] == '#' && block[i + 4] == '#'
			&& i < 11)
		return (1);
	if (block[i + 4] == '#' && block[i + 7] == '#' && block[i + 8] == '#'
			&& i < 8)
		return (1);
	if (block[i + 3] == '#' && block[i + 4] == '#' && block[i + 5] == '#'
			&& i < 11)
		return (1);
	if (block[i + 3] == '#' && block[i + 4] == '#' && block[i + 8] == '#'
			&& i < 8)
		return (1);
	if (block[i + 2] == '#' && block[i + 3] == '#' && block[i + 4] == '#'
			&& i < 12)
		return (2);
	return (0);
}

char	**new_position(char **tab)
{
	t_pos	pos;
	int		spe;
	int		position;
	int		letter;

	pos.y = 0;
	letter = 'A';
	while (tab[pos.y])
	{
		pos.x = 0;
		spe = check_special_pattern(tab[pos.y]);
		position = 0;
		while (tab[pos.y][pos.x] != '#' && tab[pos.y][pos.x++])
			position++;
		while (tab[pos.y][pos.x])
		{
			if (tab[pos.y][pos.x] == '#' && (tab[pos.y][pos.x] = '.'))
				tab[pos.y][pos.x - (position - spe)] = letter;
			pos.x++;
		}
		pos.y++;
		letter++;
	}
	return (tab);
}

