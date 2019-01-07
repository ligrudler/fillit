/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:47:30 by lgrudler          #+#    #+#             */
/*   Updated: 2019/01/07 17:12:48 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	char	str[548];
	int		ret;

	fd = open(av[1], O_RDONLY);
	ret = read(fd, str, 548);
	str[ret] = '\0';
	
	printf("%d\n", good_pattern(str));
	return (0);
}

