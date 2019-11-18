/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:34:55 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/18 15:19:58 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "auxiliar.h"

int		times_appear(const char *s, char c)
{
	int	i;
	int	n;
	int flag;

	flag = 1;
	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (flag)
				n++;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (n);
}

int		len_till_char(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		n_array;
	char	**result;
	int		i;
	int		l_aux;

	i = 0;
	n_array = times_appear(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * n_array + 1)))
		return (NULL);
	while (i < n_array)
	{
		while (*s && *s == c)
			s++;
		l_aux = len_till_char(s, c);
		result[i] = ft_substr((const char *)s, 0, l_aux);
		if (!result[i++])
			return (NULL);
		s += l_aux;
	}
	result[i] = 0;
	return (result);
}
