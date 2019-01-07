/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 11:33:40 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 16:18:07 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	size_t			len;
	char			*n_str;

	if (s == 0)
		return (NULL);
	if (s[0] == 0)
		return ((char*)s);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	if (start == ft_strlen(s))
	{
		n_str = ft_strsub(s, start, end);
		if (!n_str)
			return (NULL);
		return (n_str);
	}
	while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
		end--;
	len = end - start;
	n_str = ft_strsub(s, start, len + 1);
	return (n_str);
}
