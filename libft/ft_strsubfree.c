/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 22:25:30 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/06 22:37:12 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubfree(char *s, unsigned int start, size_t len)
{
	char *tmp;

	if (!(tmp = ft_strsub(s, start, len)))
		return (NULL);
	free(s);
	return (tmp);
}
