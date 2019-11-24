/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:45:45 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/19 21:55:57 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_rec(unsigned int n, int fd)
{
	char aux;

	if (n / 10)
	{
		print_rec(n / 10, fd);
	}
	aux = n % 10 + '0';
	write(fd, &aux, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int aux;

	if (n < 0)
	{
		write(fd, "-", 1);
		aux = n * -1;
	}
	else
		aux = n;
	print_rec(aux, fd);
}
