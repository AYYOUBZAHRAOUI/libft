/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 05:38:41 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/16 06:29:28 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *head;
	head = malloc(16);
	if(head == NULL)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}