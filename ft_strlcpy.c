/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:12:31 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/02 17:04:50 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	lensrc;
	int	cont;

	if (dst == 0 || src == 0)
		return (0);
	lensrc = ft_strlen(src);
	cont = 0;
	while ((cont < (int)dstsize - 1) && src[cont] != '\0')
	{
		dst[cont] = src[cont];
		cont++;
	}
	if ((int)dstsize > 0)
		dst[cont] = '\0';
	return (lensrc);
}
