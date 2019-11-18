/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:24:45 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/16 19:07:11 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	if (!n)
		return (ft_strlen(src));
	while (dst[i] && i < n)
		i++;
	len_dst = i;
	while (i < n - 1 && src[j])
		dst[i++] = src[j++];
	if (len_dst < n)
		dst[i] = 0;
	return (ft_strlen(src) + len_dst);
}
