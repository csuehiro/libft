/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:08:51 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/02 15:29:00 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				cont;

	str = (unsigned char *)s;
	cont = 0;
	while (cont < (int)n && str[cont] != (unsigned char)c)
		cont++;
	if (cont == (int)n)
		return (0);
	return ((void *)&str[cont]);
}
