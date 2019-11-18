/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:19:07 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/13 22:07:51 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = (unsigned char)c;
	while (i < n)
	{
		if (((const char*)s)[i] == aux)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
