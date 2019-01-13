/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 19:44:40 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/13 14:45:12 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
		char	*buf;
		char	**tab;
		char	**map;
		int		size; //

	if (ac != 2)
	{
		ft_putendl("Usage: .fillit mon_fichier");
		return (0);
	}
	if (! (buf = get_file(av[1])))
		return (0);
	if (!(tab = get_tetri(buf)))
		return (0);
	size = min_map_size(tab);
	if (!(map = get_map(size)))
		return (0);
	printf ("size = %d\n", size);
	print_map(map);
	/*if (!buf)
	{
		ft_putendl("Mauvais Fichier !");
		return (0);
	}
	ft_putendl("Bon Fichier !");
	ft_strdel(&buf);*/
	return (0);
}
