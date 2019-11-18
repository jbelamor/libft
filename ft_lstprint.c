/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 18:05:33 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/18 18:15:17 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    print_list(t_list *beg)
{
	while (beg->next)
	{
	printf("%s\n", beg->content);
	beg = beg->next;
	}
	printf("%s\n", beg->content);

	printf("fin printing\n");
}
