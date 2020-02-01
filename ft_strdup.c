/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:13:28 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/25 11:27:41 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;
	int		cont;

	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	cont = 0;
	if (str == 0)
		return (0);
	while (s1[cont] != '\0')
	{
		str[cont] = s1[cont];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
