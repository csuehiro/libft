/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:34:08 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/02 17:01:32 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	cont;
	int	lendst;
	int	lensrc;

	cont = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if ((int)dstsize == 0)
		return ((size_t)lensrc);
	if (lendst >= (int)dstsize)
		return ((size_t)lensrc + dstsize);
	while (src[cont] != 0 && ((int)dstsize - lendst - 1) != 0)
	{
		dst[lendst + cont] = src[cont];
		cont++;
		dstsize--;
	}
	dst[lendst + cont] = '\0';
	return ((size_t)lensrc + (size_t)lendst);
}
