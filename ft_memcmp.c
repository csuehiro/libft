/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:23:30 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 22:20:28 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux1;
	unsigned char	*aux2;
	size_t			cont;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	cont = 0;
	while (cont < n)
	{
		if (aux1[cont] != aux2[cont])
			return (aux1[cont] - aux2[cont]);
		cont++;
	}
	return (0);
}
