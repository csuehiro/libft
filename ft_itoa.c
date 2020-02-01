/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 11:30:22 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/25 12:35:56 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char		*str;
	int			cont;
	long int	aux;

	cont = n <= 0 ? 1 : 0;
	aux = n;
	while (n != 0)
	{
		n = n / 10;
		cont++;
	}
	str = (char *)malloc(sizeof(char) * (cont + 1));
	if (str == 0)
		return (0);
	str[cont] = '\0';
	n = aux;
	aux = aux < 0 ? -aux : aux;
	while (--cont >= 0)
	{
		str[cont] = aux % 10 + 48;
		if (cont == 0 && n < 0)
			str[cont] = '-';
		aux = aux / 10;
	}
	return (str);
}
