/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:58:35 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/13 19:20:07 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (!len || len < start)
	{
		if (!(dst = malloc(sizeof(char))))
			return (NULL);
		dst = "";
		return (dst);
	}
	if (!*s)
		return ((char *)s);
	if (!(dst = malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
