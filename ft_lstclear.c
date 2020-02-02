/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:33:12 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/02 17:52:58 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*erase;

	if (*lst != 0 && del != 0)
	{
		aux = *lst;
		while (aux != 0)
		{
			del(aux->content);
			erase = aux;
			aux = aux->next;
			free(erase);
		}
		*lst = 0;
	}
}
