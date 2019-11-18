/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgoindex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 20:51:58 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/15 20:52:10 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstgoindex(t_list **alst, int index)
{
	int		i;
	t_list	*elem;

	i = 0;
	if (!index)
		return (*alst);
	if (index >= ft_lstsize(*alst))
		return (NULL);
	elem = *alst;
	while (i < index && elem->next)
	{
		elem = elem->next;
		i++;
	}
	return (elem);
}
