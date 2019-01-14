/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 19:44:40 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/14 16:20:06 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_result(char **tab, int size)
{
	int		i;
	char	**map;

	i = 0;
	map = get_map(size);
	while (backtrack_solver(map, tab, size, i) == 0)
	{
		size++;
		free_map(map);
		map = get_map(size);
	}
	print_map(map);
	free_map(map);
}

int		main(int ac, char **av)
{
	char	*buf;
	char	**tab;
	int		size;

	if (ac != 2)
	{
		ft_putendl("Usage: ./fillit my_file");
		return (0);
	}
	if (!(buf = get_file(av[1])))
	{
		ft_putendl("error");
		return (0);
	}
	if (!(tab = get_tetri(buf)))
		return (0);
	size = min_map_size(tab);
	print_result(tab, size);
	free_map(tab);
	return (0);
}
