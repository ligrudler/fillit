/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 13:36:51 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 08:54:08 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int			i;
	long int	nombre;
	char		*str;

	nombre = n;
	i = ft_lenint(n);
	str = ft_strnew(i);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nombre = nombre * -1;
	}
	while (nombre > 0)
	{
		str[--i] = nombre % 10 + '0';
		nombre = nombre / 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}
