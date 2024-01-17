/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:47:08 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/17 23:38:50 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list *p;
	t_list *q;

		
	q = NULL;
	while (lst != NULL)
	{

		p = malloc(16);
		if (p == NULL)
		{
			ft_lstclear(&q, del);
			return NULL;
		}
		p->content = f(lst->content);
		p->next = NULL;
		if (p->content == NULL)
		{
			ft_lstclear(&q, del);
			return NULL;
		}
		ft_lstadd_back(&q, p);
		lst = lst -> next;
		p = p->next;
		
	}
	return (q);
}