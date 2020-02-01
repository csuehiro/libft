/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:33:12 by csuehiro          #+#    #+#             */
/*   Updated: 2020/01/29 20:39:17 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*erase;

	if (*lst != 0)
	{
		aux = *lst;
		while (aux->next != 0)
		{
			erase = aux;
			aux = aux->next;
			del(erase);
		}
		del(aux);
		*lst = 0;
	}
}
