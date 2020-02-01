/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:34:08 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/01 17:39:29 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	cont;
	int	aux;
	int	bla;

	cont = ft_strlen(dst);
	aux = 0;
	bla = 0;
	while (cont < (int)dstsize - 1 && src[aux] != '\0')
	{
		dst[cont] = src[aux];
		cont++;
		aux++;
		bla = 1;
	}
	if (cont == (int)dstsize - 1 || src[aux] == '\0')
		dst[cont] = '\0';
	while (src[aux] != '\0')
	{
		aux++;
		cont++;
	}
	if (bla == 0 && (int)dstsize <= (int)ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	return ((size_t)cont);
}
