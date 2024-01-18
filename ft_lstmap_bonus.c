/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:47:08 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 03:38:50 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*p;
	t_list	*q;
	t_list	*new;

	q = NULL;
	while (lst != NULL)
	{
		p = f(lst->content);
		new = ft_lstnew(p);
		if (new == NULL)
		{
			del(p);
			ft_lstclear(&q, del);
			return (NULL);
		}
		ft_lstadd_back(&q, new);
		lst = lst->next;
	}
	return (q);
}
