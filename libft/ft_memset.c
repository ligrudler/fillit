/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:16:35 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:18:25 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	uc;
	unsigned long	i;
	unsigned char	*sb;

	uc = (unsigned char)c;
	sb = (unsigned char*)b;
	i = 0;
	while (i < n)
	{
		sb[i] = uc;
		i++;
	}
	return (b);
}
