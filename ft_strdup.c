/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:02:20 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/13 17:44:43 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*p;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	if (!(p = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = 0;
	return (p);
}
