/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:57:03 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 01:29:35 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	j;
	unsigned int	k;

	if (s1 == NULL || set == NULL)
	{
		if (s1 == NULL)
			return (NULL);
		else
			return (ft_strdup(s1));
	}
	j = 0;
	while (s1[j])
	{
		if (!ft_strchr(set, s1[j]))
			break ;
		j++;
	}
	k = ft_strlen(s1);
	while (k-- > 0 && k > j)
	{
		if (!ft_strrchr(set, s1[k]))
			break ;
	}
	return (ft_substr(s1, j, k - j + 1));
}
