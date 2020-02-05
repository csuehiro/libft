/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:42:56 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/05 19:44:26 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cont;
	char	*max;

	cont = 0;
	max = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char)c)
			max = (char *)s + cont;
		cont++;
	}
	if (c == 0 && max == 0)
		max = (char *)s + cont;
	return (max);
}
