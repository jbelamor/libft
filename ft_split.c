/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:34:55 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/21 17:13:00 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	times_appear(const char *s, char c)
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

static int	len_till_char(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	clean(char **res, int i)
{
	while (--i > 0)
		free(res[i]);
	free(res);
}

char		**ft_split(char const *s, char c)
{
	int		n_array;
	char	**result;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	n_array = times_appear(s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (n_array + 1))))
		return (NULL);
	while (i < n_array)
	{
		while (*s && *s == c)
			s++;
		result[i] = ft_substr((const char *)s, 0, len_till_char(s, c));
		if (!result[i++])
		{
			clean(result, i);
			return (NULL);
		}
		s += len_till_char(s, c);
	}
	result[i] = 0;
	return (result);
}
