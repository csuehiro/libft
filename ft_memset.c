/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:58:29 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 22:08:48 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			cont;

	cont = 0;
	str = (unsigned char *)b;
	while (cont < len)
	{
		str[cont] = (unsigned char)c;
		cont++;
	}
	return (str);
}
