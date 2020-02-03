/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csuehiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 20:59:18 by csuehiro          #+#    #+#             */
/*   Updated: 2020/02/03 19:48:56 by csuehiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;

	if (lst == 0 || f == 0)
		return (0);
	newlst = 0;
	while (lst != 0)
	{
		aux = ft_lstnew(f(lst->content));
		if (aux == 0)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, aux);
		lst = lst->next;
	}
	return (newlst);
}
