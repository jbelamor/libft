/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_auxiliar.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:09:04 by jbelena           #+#    #+#             */
/*   Updated: 2019/11/16 18:12:29 by jbelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_AUXILIAR_H__
# define __FT_AUXILIAR_H__
#include <stdlib.h>
#include <unistd.h>

void	ft_bzero(void *b, size_t len);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);

#endif
