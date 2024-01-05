/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:20:44 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/03 14:10:02 by ayzahrao         ###   ########.fr       */
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
	p = (char *)malloc(i + 1);
	if (p == NULL)
		return (NULL);
	while (j < i + 1)
	{
		p[j] = s1[j];
		j++;
	}
	return (p);
}
