/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:08:51 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 23:22:14 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			cont;

	str = (unsigned char *)s;
	cont = 0;
	while (cont < n)
	{
		if (str[cont] == (unsigned char)c)
			return (&str[cont]);
		cont++;
	}
	return (0);
}
