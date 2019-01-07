/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:15:28 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:41:47 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	n_str = (char*)malloc(sizeof(char) * (len + 1));
	if (!n_str)
		return (NULL);
	n_str = ft_strcpy(n_str, s1);
	n_str = ft_strcat(n_str, s2);
	n_str[len + 1] = 0;
	return (n_str);
}
