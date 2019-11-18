/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 20:49:41 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/18 18:44:45 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elem;

	if (lst)
	{
		elem = *lst;
		while (elem)
		{
			if (elem->content)
				del(elem->content);
			elem = elem->next;
		}
	}
	*lst = NULL;
}
