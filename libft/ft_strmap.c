/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:54:39 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:42:32 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*n_str;

	i = 0;
	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	n_str = (char*)malloc(sizeof(*n_str) * (len + 1));
	if (n_str == NULL)
		return (NULL);
	while (s[i])
	{
		n_str[i] = f(s[i]);
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
