/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:23:20 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/13 18:16:10 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		total_len;
	char	*p;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(p = malloc(sizeof(char) * total_len + 1)))
		return (NULL);
	i = 0;
	while (*s1)
		p[i++] = *(s1++);
	while (*s2)
		p[i++] = *(s2++);
	p[i] = 0;
	return (p);
}
