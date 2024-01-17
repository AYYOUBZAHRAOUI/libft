/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 07:02:27 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/16 07:07:00 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return NULL;
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}