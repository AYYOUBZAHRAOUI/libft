/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 01:20:21 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 01:22:03 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i1;
	int		i2;

	if (!s1 || !s2)
	{
		if (!s1 && !s2)
			return (NULL);
		else if (!s1)
			return ((char *)ft_strdup(s2));
		else
			return ((char *)ft_strdup(s1));
	}
	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	p = (char *)malloc(i1 + i2 + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s1, i1);
	ft_memcpy(p + i1, s2, i2 + 1);
	return (p);
}
