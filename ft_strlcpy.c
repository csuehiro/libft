/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:12:31 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 22:33:38 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	cont;

	if (dst == 0 || src == 0)
		return (0);
	lensrc = ft_strlen(src);
	cont = 0;
	if (dstsize != 0)
	{
		while ((cont < dstsize - 1) && src[cont] != '\0')
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	return (lensrc);
}
