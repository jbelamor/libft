/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:19:07 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/22 16:34:36 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	aux;

	i = 0;
	aux = (unsigned char)c;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == aux)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
