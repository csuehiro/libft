/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:48:11 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 22:10:04 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;
	char	*auxdst;
	char	*auxsrc;

	cont = 0;
	if (dst == 0 && src == 0)
		return (0);
	auxdst = (char *)dst;
	auxsrc = (char *)src;
	while (cont < n)
	{
		auxdst[cont] = auxsrc[cont];
		cont++;
	}
	return (dst);
}
