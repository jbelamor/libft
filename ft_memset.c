/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:22:57 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/11 18:24:39 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	while (i < len)
		((unsigned char*)b)[i++] = a;
	return (b);
}
