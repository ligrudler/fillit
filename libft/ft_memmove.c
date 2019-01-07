/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:38:30 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:18:08 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	dst_p = (unsigned char*)dst;
	src_p = (unsigned char*)src;
	if (len == 0 || dst == src)
		return (dst);
	else if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			dst_p[len] = src_p[len];
	}
	return (dst);
}
