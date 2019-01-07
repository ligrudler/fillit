/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:13:49 by lgrudler          #+#    #+#             */
/*   Updated: 2019/01/07 17:19:34 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		puterror(void)
{
	write(2, "error\n", 6);
	return (0);
}

int		good_pattern(char *str)
{
	int		i;
	int		dot;
	int		hashtag;

	i = 0;
	dot = 0;
	hashtag = 0;
	while(str[i] && i < 21)
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '.')
			dot++;
		if (str[i] == '#')
			hashtag++;
		i++;
	}
	printf("%d\n", hashtag);
	printf("%d\n", dot);
	if (hashtag == 4 && dot == 12)
		return (1);
	return (0);
}


