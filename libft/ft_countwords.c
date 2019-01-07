/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:15:29 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 08:51:34 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int	i;
	int	mots;

	if (!str)
		return (0);
	i = 0;
	mots = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != 0)
			i++;
		if (str[i] != c && str[i] != 0)
			mots++;
		while (str[i] != c && str[i] != 0)
			i++;
	}
	return (mots);
}
