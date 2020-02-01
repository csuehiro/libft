/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:21:47 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/01 16:06:08 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_begin(char const *s1, char const *set, int end)
{
	int		beg;
	char	c;

	beg = 0;
	c = s1[beg];
	while (ft_strchr(set, c) != 0 && beg < end)
	{
		beg++;
		c = s1[beg];
	}
	return (beg);
}

static int	find_end(char const *s1, char const *set, int end)
{
	char	c;

	c = s1[end - 1];
	while (ft_strchr(set, c) != 0 && end > 0)
	{
		end--;
		if (end > 0)
			c = s1[end - 1];
	}
	return (end);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		end;
	int		beg;
	int		aux;

	if (s1 == 0)
		return (0);
	end = ft_strlen(s1);
	aux = 0;
	end = find_end(s1, set, end);
	beg = find_begin(s1, set, end);
	trim = (char *)malloc(sizeof(char) * ((end - beg) + 1));
	if (trim == 0)
		return (0);
	while (beg < end)
	{
		trim[aux] = s1[beg];
		aux++;
		beg++;
	}
	trim[aux] = '\0';
	return (trim);
}
