/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimal_position.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 15:07:55 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/10 15:50:54 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_special_pattern(char *block)
{
	int		i;

	i = 0;
	while (block[i] != '#')
		i++;
	if (block[i + 3] == '#' && block[i + 4] == '#' && block[i + 7] == '#')
		return (1);
	if (block[i + 1] == '#' && block[i + 3] == '#' && block[i + 4] == '#')
		return (1);
	if (block[i + 4] == '#' && block[i + 7] == '#' && block[i + 8] == '#')
		return (1);
	if (block[i + 3] == '#' && block[i + 4] == '#' && block[i + 5] == '#')
		return (1);
	if (block[i + 3] == '#' && block[i + 4] == '#' && block[i + 8] == '#')
		return (1);
	if (block[i + 2] == '#' && block[i + 3] == '#' && block[i + 4] == '#')
		return (2);
	return (0);
}
