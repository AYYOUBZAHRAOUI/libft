/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:40:48 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/16 08:05:06 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;
	p = ft_lstlast(*lst);
	if (p == NULL)
	{
		*lst = new;
		return;
	}
	p->next = new;
}