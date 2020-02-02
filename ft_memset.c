/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:58:29 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/02 15:03:41 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	int				cont;

	cont = 0;
	str = (unsigned char *)b;
	while (cont < (int)len)
	{
		str[cont] = (unsigned char)c;
		cont++;
	}
	return (b);
}
