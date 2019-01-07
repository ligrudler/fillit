/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 09:26:29 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:44:17 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_c;

	i = 0;
	c_c = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c_c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}
