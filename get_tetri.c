/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:41:19 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/13 22:51:41 by lgrudler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

char **get_tetri(char *str)
{
	char **tab;
	char **ntab;
	char *nstr;

	if (!(nstr = erase_newline(str)))
		return (NULL);
	if (!(tab = stock_tetri(nstr)))
		return (NULL);
//	free(nstr); //Ca marche pas... Pourtant faudrait le free vu qu on l utilise plus nan ?
	ntab = new_position(tab);
//	free_map(tab); // ATTENTION: ne change rien avec valgrind. On supprime de la mémoire le tab qu'on utilisera plus.
	return (ntab);
}
