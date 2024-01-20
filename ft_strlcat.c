/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:46 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/20 03:39:12 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	if (dst == NULL)
		i = 0;
	else
		i = ft_strlen(dst);
	k = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[k] != '\0' && (i + k) < dstsize - 1)
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	if ((dstsize) < i)
		return (dstsize + ft_strlen(src));
	else
		return (i + ft_strlen(src));
}
