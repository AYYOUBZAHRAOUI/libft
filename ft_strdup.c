/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:20:44 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/07 17:58:26 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int i;
	int j;
	char *p;
	i = ft_strlen(s1);
	j = 0;
	p = (char *)ft_calloc(i + 1, 1);
	if (p == NULL)
		return (NULL);
	while (j < i + 1)
	{
		p[j] = s1[j];
		j++;
	}
	return (p);
}
