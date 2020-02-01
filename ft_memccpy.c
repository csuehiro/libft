/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:34:31 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 21:16:12 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				cont;
	unsigned char	*auxd;
	unsigned char	*auxs;

	cont = 0;
	auxd = (unsigned char *)dst;
	auxs = (unsigned char *)src;
	while (cont < (int)n)
	{
		auxd[cont] = auxs[cont];
		if (auxs[cont] == (unsigned char)c)
			return (&dst[cont + 1]);
		cont++;
	}
	return (0);
}
