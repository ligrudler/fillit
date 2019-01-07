/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:17:12 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:42:05 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long		i;
	unsigned long		t_dst;
	unsigned long		t_src;

	i = 0;
	t_dst = ft_strlen(dst);
	t_src = ft_strlen(src);
	if (t_dst + 1 > size)
		return (t_src + size);
	while (t_dst + i + 1 < size && src[i] != 0)
	{
		dst[t_dst + i] = src[i];
		i++;
	}
	dst[t_dst + i] = '\0';
	return (t_dst + t_src);
}
