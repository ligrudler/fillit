/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:27:25 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:44:30 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strdup_mini(const char *str, char c)
{
	int		i;
	int		len;
	char	*n_str;

	i = 0;
	len = 0;
	if (!str)
		return (NULL);
	while (str[len] != 0 && str[i] != c)
		len++;
	n_str = (char*)malloc(sizeof(*n_str) * (len + 1));
	if (!n_str)
		return (NULL);
	while (str[i] != 0 && str[i] != c)
	{
		n_str[i] = str[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tab = (char**)malloc(sizeof(*tab) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			tab[j] = ft_strdup_mini(&s[i], c);
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	tab[j] = NULL;
	return (tab);
}
