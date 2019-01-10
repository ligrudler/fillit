/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 16:39:05 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/10 17:45:40 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		count_tetri(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		min_grid_size(int tetri)
{
	int		a;

	a = 0;
	while ((a * a) < (tetri * 4))
		a++;
	return (a);
}

char	*get_min_map(char **tab)
{
	int		tetri;
	int		size;
	char	*min_map;
	int		i; // debug

	i = 0; // debug
	tetri = count_tetri(tab);
	size = min_grid_size(tetri);
//	printf("Tetri = %d\n", tetri);
//	printf("Size = %d\n", size);
	if(!(min_map = (char*)malloc(sizeof(char) * (size * size))))
		return (NULL);
//	printf("nombre de caractere =  %d\n", size * size + size + 1);
	while(i < size * size + size)
	{
		min_map[i] = '.';
		i++;
	}
	i = 0;
	while (i < size * size + size)
	{
		min_map[i + size] = '\n';
		i = i + size + 1;
	}
	min_map[i] = '\0';
//	printf("%s\n", min_map);
	return (min_map);
}
