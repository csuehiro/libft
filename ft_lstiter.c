/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:42:40 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/29 20:57:52 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;

	if (lst != 0)
	{
		aux = lst;
		while (aux->next != 0)
		{
			f(aux->content);
			aux = aux->next;
		}
		f(aux->content);
	}
}
