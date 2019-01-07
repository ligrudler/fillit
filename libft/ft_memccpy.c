/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:51:45 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:16:58 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	dst_p = (unsigned char*)dst;
	src_p = (unsigned char*)src;
	while (n--)
	{
		*dst_p = *src_p;
		dst_p++;
		src_p++;
		if (*(src_p - 1) == (unsigned char)c)
			return ((void*)dst_p);
	}
	return (NULL);
}
