/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:48:11 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 21:03:07 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		cont;
	char	*auxdst;
	char	*auxsrc;

	cont = 0;
	auxdst = (char *)dst;
	auxsrc = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (cont < (int)n)
	{
		auxdst[cont] = auxsrc[cont];
		cont++;
	}
	return (dst);
}
