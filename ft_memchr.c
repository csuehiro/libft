/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:08:51 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 21:09:53 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		cont;

	str = (void *)s;
	cont = 0;
	while (cont < (int)n && str[cont] != '\0')
	{
		if (str[cont] == (char)c)
			return ((void *)&s[cont]);
		cont++;
	}
	if (str[cont] == (char)c && cont < (int)n)
		return ((void *)&s[cont]);
	return (0);
}
