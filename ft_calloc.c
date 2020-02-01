/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:34:09 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/25 17:41:10 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		i;

	str = (void *)malloc(sizeof(void) * (count * size));
	i = 0;
	if (str == 0)
		return (0);
	while (i < (int)count * (int)size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
