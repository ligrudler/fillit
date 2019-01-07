/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:29:17 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/22 15:52:04 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned long	i;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	if (n == 0)
		return (1);
	while (s1[i] != 0 && s2[i] != 0 && i + 1 < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	if (s1[i] == s2[i])
		return (1);
	else
		return (0);
}
