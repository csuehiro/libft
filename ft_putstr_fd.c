/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:07:00 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/31 23:44:23 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	cont;

	if (s == 0)
		return ;
	cont = 0;
	while (s[cont] != '\0')
	{
		ft_putchar_fd(s[cont], fd);
		cont++;
	}
}
