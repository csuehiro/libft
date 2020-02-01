/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:58:29 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/25 15:24:39 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*str;

	cont = 0;
	str = b;
	while (cont < len)
	{
		str[cont] = c;
		cont++;
	}
	return (b);
}
