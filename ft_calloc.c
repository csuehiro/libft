/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 17:34:09 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/02 14:56:16 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	len = count * size;
	str = (char *)malloc(sizeof(char) * len);
	i = 0;
	if (str == 0)
		return (0);
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
