/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:39:05 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/14 16:34:24 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		print_map(char **map)
{
	int		i;

	i = 0;
	while (map[i] != NULL)
	{
		ft_putendl(map[i]);
		i++;
	}
	return (0);
}

int		min_map_size(char **tab)
{
	int		a;
	int		tetri;

	tetri = 0;
	while (tab[tetri])
		tetri++;
	a = 0;
	while ((a * a) < (tetri * 4))
		a++;
	return (a);
}

void	free_map(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

char	**get_map(int size)
{
	int		i;
	int		j;
	char	**map;

	i = 0;
	j = 0;
	if (!(map = (char**)malloc(sizeof(char*) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		j = 0;
		if (!(map[i] = (char*)malloc(sizeof(char) * (size + 1))))
			return (NULL);
		while (j < size)
		{
			map[i][j] = '.';
			j++;
		}
		map[i][size] = '\0';
		i++;
	}
	map[i] = NULL;
	return (map);
}
