/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:34:31 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/05 19:26:03 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	cont;
	char	*auxd;
	char	*auxs;

	cont = 0;
	if (dst == 0 && src == 0)
		return (0);
	auxd = (char *)dst;
	auxs = (char *)src;
	while (cont < n)
	{
		auxd[cont] = auxs[cont];
		if (auxs[cont] == (char)c)
			return (&dst[cont + 1]);
		cont++;
	}
	return (0);
}
