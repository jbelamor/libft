/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:19:14 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/13 22:02:23 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

void	*ft_memccpy(void *restrict s2, const void *restrict s1, int c, size_t n)
{
	size_t			i;
	unsigned char	aux;

	i = 0;
	aux = (unsigned char)c;
	while (i < n)
	{
		((unsigned char *)s2)[i] = ((unsigned char *)s1)[i];
		if (((unsigned char *)s1)[i] == aux && ((unsigned char *)s1))
			return (s2 + (i + 1));
		i++;
	}
	return (NULL);
}
