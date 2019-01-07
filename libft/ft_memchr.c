/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:38:08 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:17:16 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	c_c;
	unsigned char	*s_p;

	i = 0;
	c_c = (unsigned char)c;
	s_p = (unsigned char*)s;
	while (i < n)
	{
		if (s_p[i] != c_c)
			i++;
		else
			return ((void*)s + i);
	}
	return (NULL);
}
