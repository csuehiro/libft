/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:42:56 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/24 21:05:04 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int cont;
	int max;

	cont = 0;
	max = -1;
	while (s[cont] != '\0')
	{
		if (s[cont] == c)
			max = cont;
		cont++;
	}
	if (s[cont] == c)
		max = cont;
	if (max == -1)
		return (0);
	return ((char *)&s[max]);
}
