/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:43:22 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:17:32 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	i;
	unsigned char	*s1_u;
	unsigned char	*s2_u;

	i = 0;
	s1_u = (unsigned char*)s1;
	s2_u = (unsigned char*)s2;
	while (i < n)
	{
		if (s1_u[i] != s2_u[i])
			return (s1_u[i] - s2_u[i]);
		i++;
	}
	return (0);
}
