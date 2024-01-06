/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:02:17 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/05 23:04:08 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	unsigned int j;
	void *p;

	j = 0;
	i = ft_strlen(s);
	
	if (s  == NULL)
		return (NULL);
	if (start >= i)
		return (ft_strdup(""));
	if (start + len > i)
		return (ft_strdup((s + start)));
	else
		p = ft_calloc(len + 1, 1);
		if (p == NULL)
			return (NULL);
		else
			return (char *)ft_memmove(p, (s + start), len);
}