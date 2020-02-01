/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 16:13:14 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 23:43:26 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		cont;

	if (s == 0)
		return (0);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s == 0 || new == 0)
		return (0);
	cont = 0;
	while (s[cont] != '\0')
	{
		new[cont] = f(cont, s[cont]);
		cont++;
	}
	new[cont] = '\0';
	return (new);
}
