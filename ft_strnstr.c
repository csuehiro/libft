/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:58:26 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 23:18:14 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	lfind;
	int	cont;

	lfind = (int)ft_strlen(needle);
	cont = 0;
	if (lfind == 0)
		return ((char *)haystack);
	while (cont < (int)len)
	{
		if (ft_strncmp(&haystack[cont], needle, lfind) == 0)
			return ((char *)&haystack[cont]);
		cont++;
		if ((int)len - cont < lfind + 1)
			return (0);
	}
	return (0);
}
