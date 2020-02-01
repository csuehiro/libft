/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:23:30 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 22:02:01 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*aux1;
	char			*aux2;
	unsigned char	a;
	unsigned char	b;
	int				cont;

	aux1 = (char *)s1;
	aux2 = (char *)s2;
	cont = 0;
	while (cont < (int)n)
	{
		a = aux1[cont];
		b = aux2[cont];
		if (a != b)
			return (a - b);
		cont++;
	}
	return (0);
}
