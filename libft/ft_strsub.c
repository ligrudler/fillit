/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:47:11 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:44:55 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*n_str;
	unsigned long	i;

	i = 0;
	if (s == 0)
		return (NULL);
	n_str = (char *)malloc(sizeof(*n_str) * (len + 1));
	if (!n_str)
		return (NULL);
	while (i < len)
	{
		n_str[i] = s[start];
		i++;
		start++;
	}
	n_str[i] = 0;
	return (n_str);
}
