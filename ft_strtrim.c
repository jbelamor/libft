/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:24:28 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/13 18:47:44 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

static int		char_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *(set++))
			return (1);
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		rep_back;
	char	*aux;

	rep_back = 0;
	if (!set || !*s1)
		return ((char *)s1);
	while (*s1)
	{
		if (!char_in_set(*s1, set))
			break ;
		s1++;
	}
	if (!*s1)
		return ((char *)s1);
	aux = (char *)s1;
	while (*s1)
		s1++;
	s1--;
	while (s1 >= aux)
	{
		if (!char_in_set(*(s1--), set))
			break ;
		rep_back++;
	}
	return (ft_substr(aux, 0, ft_strlen(aux) - rep_back));
}
