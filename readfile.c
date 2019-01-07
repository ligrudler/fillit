/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:47:30 by lgrudler          #+#    #+#             */
/*   Updated: 2019/01/07 17:52:52 by lgrudler         ###   ########.fr       */
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
	if (good_pattern(str) == 0)
		printf("%s\n", "pb");
	if (check_newline(str) == 0)
		printf("%s\n", "pbs");
	else
		printf("%s\n", "OKAYYYY");
	return (0);
}

