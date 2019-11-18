/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:01:46 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/11 15:05:39 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		n_digits(long n)
{
	int		res;
	long	aux;

	if (n == 0)
		return (1);
	aux = n;
	res = 0;
	if (n < 0)
	{
		res++;
		aux = -n;
	}
	while (aux > 0)
	{
		res++;
		aux /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	long	aux_n;
	int		num_digits;
	char	*result;
	int		i;

	i = 0;
	aux_n = n;
	num_digits = n_digits(n);
	if (!(result = malloc(sizeof(char) * num_digits + 1)))
		return (NULL);
	if (aux_n < 0)
	{
		aux_n *= -1;
		result[0] = '-';
	}
	while (aux_n / 10 > 0)
	{
		result[num_digits - ++i] = (aux_n % 10) + 48;
		aux_n /= 10;
	}
	result[num_digits - ++i] = (aux_n % 10) + 48;
	result[num_digits] = 0;
	return (result);
}
