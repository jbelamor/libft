/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:23:40 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/11 17:42:02 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char aux;

	aux = c;
	while (*s && *s != c)
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
