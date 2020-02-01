/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 13:24:41 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 23:41:47 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*str;
	int		cont;
	int		aux;

	if (s1 == 0)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	cont = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0 || (s1 == 0))
		return (0);
	while (s1[cont] != '\0')
	{
		str[cont] = s1[cont];
		cont++;
	}
	aux = 0;
	while (s2[aux] != '\0')
	{
		str[cont + aux] = s2[aux];
		aux++;
	}
	str[cont + aux] = '\0';
	return (str);
}
