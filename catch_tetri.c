/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:41:19 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/10 15:47:32 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int count_tetri(char *str)
{
	int i;
	int tetri;

	i = ft_strlen(str) + 1;
	tetri = i / 21;
	return (tetri);
}

char *erase_newline(char *str)
{
	int i;
	int j;
	int tetri;
	char *nstr;

	i = 0;
	j = 0;
	tetri = (ft_strlen(str) + 1) / 21;
	if (!(nstr = (char *)malloc(sizeof(char) * ((16 * tetri) + 1))))
		return (NULL);
	while (str[i])
	{
		if (str[i] != '\n')
		{
			nstr[j] = str[i];
			j++;
		}
		i++;
	}
	nstr[j] = '\0';
	free(str);
	return (nstr);
}

char **stock_tetri(char *nstr)
{
	int i;
	int j;
	int k;
	int tetri;
	char **tab;

	i = 0;
	k = 0;
	tetri = (ft_strlen(nstr) + 1) / 16;
	if (!(tab = (char **)malloc(sizeof(char *) * (tetri + 1))))
		return (NULL);
	while (i < tetri)
	{
		j = 0;
		if (!(tab[i] = (char *)malloc(sizeof(char) * 17)))
			return (NULL);
		while (j < 16)
			tab[i][j++] = nstr[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	free(nstr);
	return (tab);
}

char **new_position(char **tab)
{
	int i;
	int j;
	int spe;
	int position;

	i = 0;
	while (tab[i])
	{
		j = 0;
		spe = check_special_pattern(tab[i]);
		position = 0;
		while (tab[i][j] != '#' && tab[i][j])
		{
			position++;
			j++;
		}
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
			{
				tab[i][j] = '.';
				tab[i][j - (position - spe)] = '#';
			}
			j++;
		}
		i++;
	}
	return (tab);
}

char **get_tetri(char *str)
{
	char **tab;
	char **ntab;
	char *nstr;
	int i; // debug

	i = 0; // debug
	if (!(nstr = erase_newline(str)))
		return (NULL);
	if (!(tab = stock_tetri(nstr)))
		return (NULL);
	ntab = new_position(tab);
	while (tab[i]) // debug
	{
		printf("%s\n", ntab[i]);
		i++;
	}
	return (ntab);
}
