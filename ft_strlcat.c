/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:46 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/03 15:41:46 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char * restrict dst, const char * restrict src, unsigned int dstsize)
{
	unsigned int i;
	unsigned int k;
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