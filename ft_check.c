/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 16:13:49 by lgrudler          #+#    #+#             */
/*   Updated: 2019/01/07 19:42:54 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_pattern(char *str)
{
	int		i;
	int		dot;
	int		hashtag;
	int		line;

	i = 0;
	dot = 0;
	hashtag = 0;
	line = 0;
	while(str[i] && i < 21)
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '.')
			dot++;
		if (str[i] == '#')
			hashtag++;
		if (str[i] == '\n')
			line++;
		i++;
	}
	if (hashtag == 4 && dot == 12)
		return (1);
	return (0);
}

int		check_newline(char *str) // On pourra fusionner cette fonction avec la précédente pour en faire une super fonction qui fait tout :-D ! (-25 lignes à voir, pour gagner des lignes, on aura pas besoin de compter les points)
{
	if (str[4] == '\n' && str[9] == '\n' && str[14] == '\n' && str[19] == '\n' && (str[20] == '\n' || str[20] == '\0'))
		return (1);
	return (0);
}

int		check_contact(char *str)
{
	int		i;
	int		contact;

	i = 0;
	contact = 0;

	while (str[i] && i < 20) // Pas besoin de checker le 21e caractère (str[20] = car c'est un '\n')}
	{
		if (str[i + 1] && str[i + 1] == '#' && i < 18)
			contact++;
		if (str[i + 5] && str[i + 5] == '#' && i < 14)
			contact++;
		if (str[i - 1] && str[i - 1] == '#' && i > 0)
			contact++;
		if (str[i - 5] && str[i - 5] == '#' && i > 4)
			contact++;
	}
	if (contact == 6 || contact == 8)
			return (1);
	return (0);
}

int		check_file(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(str);
	while(i < len)
	{
		if (!check_pattern(str + i) || !check_newline(str + i) || !check_contact(str + i))
			return (0);
	i = i + 21;
	}
	return (1);
}
