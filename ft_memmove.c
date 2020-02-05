/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:41:41 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 22:11:39 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cont;
	char	*auxdst;
	char	*auxsrc;

	cont = -1;
	if (dst == 0 && src == 0)
		return (0);
	auxdst = (char *)dst;
	auxsrc = (char *)src;
	if (dst < src)
	{
		while (++cont < len)
			auxdst[cont] = auxsrc[cont];
	}
	else
	{
		while (len > 0)
		{
			auxdst[len - 1] = auxsrc[len - 1];
			len--;
		}
	}
	return (dst);
}
