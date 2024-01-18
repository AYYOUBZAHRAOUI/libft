/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:19:53 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 01:26:53 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(needle);
	j = 0;
	if (i == 0)
		return ((char *)haystack);
	while (haystack[j] && j < len - i + 1 && i <= len)
	{
		if (ft_strncmp(haystack + j, needle, i) == 0)
			return ((char *)haystack + j);
		j++;
	}
	return (NULL);
}
