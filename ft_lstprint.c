/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:05:33 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/19 12:51:09 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_list(t_list *beg)
{
	while (beg->next)
	{
		ft_putstr_fd(beg->content, 1);
		ft_putstr_fd("\n", 1);
		beg = beg->next;
	}
	ft_putstr_fd(beg->content, 1);
	ft_putstr_fd("\n", 1);
}
