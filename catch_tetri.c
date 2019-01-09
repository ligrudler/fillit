/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 14:41:19 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/09 19:07:09 by elindao-         ###   ########.fr       */
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

char	**get_tetri(char *str)
{
	char	**tab;
	char	*nstr;

	if (! (nstr = erase_newline(str)))
		return (NULL);
	if(!(tab = stock_tetri(nstr)))
		return (NULL);
	return (tab);
}

/*char	**new_position(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while(tab[i]) // vérifier la position de i++
	{
		j = 0;
		while (tab[i][0] != '#' && tab[i][4] != '#' && tab[i][8] != '#' && tab[i][12] != '#')
		{
			while (tab[i][j]) // Verifier a quel moment j++ est incrémenté dans le while
			{
				if (tab[i][j] == '#')
					ft_swap(tab[i][j], tab[i][j - 1]);
				j++;
			}
		}
				while (tab[i][0] != '#' && tab[i][1] != '#' && tab[i][2] != '#' && tab[i][3] != '#')
		{
			while (tab[i][j]) // Verifier a quel moment j++ est incrémenté dans le while
			{
				if (tab[i][j] == '#')
					ft_swap(tab[i][j], tab[i][j - 4]);
				j++; 
			}
		}
		i++;
	}
	return (tab);
}*/
