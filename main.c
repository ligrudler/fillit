/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 19:44:40 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/09 18:25:22 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*int		main(int ac, char **av)
{
	int		fd;
	char	str[548];
	int		ret;

	if (ac != 2)
	{
		ft_putendl("Usage: .fillit mon_fichier");
		return (0);
	}

	fd = open(av[1], O_RDONLY);
	ret = read(fd, str, 548);
	str[ret] = '\0';
	if (check_file(str)== 1)
		ft_putendl("Bon Fichier !");
	else
		ft_putendl("Mauvais fichier !");
	return (0);
}*/

int		main(int ac, char **av)
{
		char	*buf;
		char	**tab;

	if (ac != 2)
	{
		ft_putendl("Usage: .fillit mon_fichier");
		return (0);
	}
	if (! (buf = get_file(av[1])))
		return (0);
	if (!(tab = get_tetri(buf)))
		return (0);
	/*if (!buf)
	{
		ft_putendl("Mauvais Fichier !");
		return (0);
	}
	ft_putendl("Bon Fichier !");
	ft_strdel(&buf);*/
	return (0);
}
