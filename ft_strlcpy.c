/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:12:31 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 22:06:39 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t cont;
	size_t stop;

	cont = 0;
	stop = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[cont] != '\0')
	{
		if (stop == 0 && size > 0)
		{
			if (cont >= size - 1)
			{
				stop = 1;
				dst[cont] = '\0';
			}
			else
				dst[cont] = src[cont];
		}
		cont++;
	}
	if (stop == 0 && size > 0)
		dst[cont] = '\0';
	return (cont);
}
