/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:52 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/03 14:04:34 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strlcpy(char * restrict dst, const char * restrict src, unsigned int dstsize)
{
	unsigned int i;
	unsigned int j;
	j = 0;
	i = ft_strlen(src);
	if (dstsize == 0)
		return (i);

	while (src[j] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;		
	}
	dst[j] = '\0';
	return (i);
}
