/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 12:45:47 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/01 15:54:31 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	cont;

	cont = -1;
	if (s == 0)
		return (0);
	if (ft_strlen(s) >= start)
	{
		sub = (char *)malloc(sizeof(char) * (len + 1));
		if (sub == 0)
			return (0);
		while (++cont < len)
			sub[cont] = s[start + cont];
		sub[cont] = '\0';
	}
	else
	{
		sub = (char *)malloc(sizeof(char) * 1);
		if (sub == 0)
			return (0);
		sub[0] = '\0';
	}
	return (sub);
}
