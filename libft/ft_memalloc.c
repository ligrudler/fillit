/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:14:08 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:16:43 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned int				i;
	void						*zone;

	i = 0;
	zone = (void*)malloc(sizeof(zone) * size);
	if (zone == NULL)
		return (NULL);
	ft_bzero(zone, size);
	return (zone);
}
