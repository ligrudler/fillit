/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 10:30:34 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 14:42:40 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		n_str[i] = f(i, s[i]);
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
