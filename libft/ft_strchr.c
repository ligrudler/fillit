/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 08:53:59 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:39:43 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_c;

	i = 0;
	c_c = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] != c_c)
			i++;
		if (s[i] == c_c)
			return ((char*)s + i);
	}
	if (c_c == '\0')
		return ((char*)s + i);
	else
		return (NULL);
}
