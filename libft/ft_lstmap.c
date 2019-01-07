/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elindao- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:35:50 by elindao-          #+#    #+#             */
/*   Updated: 2018/11/25 16:04:37 by elindao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*n_lst;
	t_list		*fct;
	t_list		*tmp;

	if (!lst || !*f)
		return (NULL);
	fct = f(lst);
	if (!(n_lst = ft_lstnew(fct->content, fct->content_size)))
		return (NULL);
	tmp = n_lst;
	lst = lst->next;
	while (lst && f)
	{
		fct = f(lst);
		if (!(tmp->next = ft_lstnew(fct->content, fct->content_size)))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (n_lst);
}
