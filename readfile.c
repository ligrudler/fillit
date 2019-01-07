/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:47:30 by lgrudler          #+#    #+#             */
/*   Updated: 2019/01/07 16:55:32 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*str;
	int		ret;

	fd = open(av[1], O_RDONLY);
	ret = read(fd, str, 548);

	ft_putendl(str);
	return (0);
}
