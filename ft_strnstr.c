/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:29:20 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/11 18:21:33 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (j == len_needle - 1 && haystack[i] == needle[j])
			return ((char *)haystack + (i - j));
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (NULL);
}
