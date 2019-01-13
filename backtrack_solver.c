/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack_solver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <elindao-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 17:18:01 by elindao-          #+#    #+#             */
/*   Updated: 2019/01/13 19:39:49 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		backtrack_solver(char **map, char **tab, int size, int i)
{
	t_pos		pos;

	if (tab[i] == NULL)   // i + 1 ?
		return (1);
	pos.y = 0;
	while (pos.y < size)
	{
		pos.x = 0;
		while (pos.x < size)
		{
			if(check_placement(map, tab[i], size, &pos))
				{
					put_block(map, tab[i], size, &pos);
					if(backtrack_solver(map, tab, size, (i + 1) ))
						return (1);
					else
						erase_block(map, tab[i], size, &pos);
				}
				pos.x += 1;
		}
		pos.y += 1;
	}
	return(0);
}
