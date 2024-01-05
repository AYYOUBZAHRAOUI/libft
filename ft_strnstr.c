/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:19:53 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/05 18:26:11 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = ft_strlen(needle);
	j = 0;
	if (i == 0)
		return ((char *)haystack);
	while (haystack[j] && j < len - i + 1 && i <= len)
	{
		while (haystack[k] == needle[j] && k < len)
		{
			k++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		j
	}
	return (NULL);
}