/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:41:41 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 21:45:28 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		cont;
	char	*auxdst;
	char	*auxsrc;

	cont = -1;
	auxdst = dst;
	auxsrc = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (dst < src)
	{
		while (++cont < (int)len)
		{
			auxdst[cont] = auxsrc[cont];
		}
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
