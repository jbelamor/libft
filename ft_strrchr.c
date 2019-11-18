/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:30:30 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/11 18:22:24 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	aux;
	size_t			len;

	aux = c;
	len = ft_strlen(s);
	while (len > 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)s + len);
	else
		return (NULL);
}
