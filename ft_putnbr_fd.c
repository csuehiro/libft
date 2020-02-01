/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 15:14:50 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/26 15:50:33 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int digit;

	digit = 1;
	n = n / 10;
	while (n != 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static void	print_num(int *number, int digit, int fd)
{
	int		cont;
	char	printn;

	cont = 0;
	if (number[0] < 0)
		write(fd, "-", 1);
	while (cont < digit)
	{
		if (number[cont] < 0)
			number[cont] = -number[cont];
		printn = number[cont] + '0';
		write(fd, &printn, 1);
		cont++;
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int	number[10];
	int	digit;
	int	cont;

	digit = count_digit(n);
	cont = digit;
	while (cont > 0)
	{
		number[cont - 1] = n % 10;
		n = n / 10;
		cont--;
	}
	print_num(number, digit, fd);
}
