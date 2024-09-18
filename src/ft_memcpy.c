/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:31 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/20 01:42:29 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	i = 0;
	if (y == NULL && x == NULL)
		return (NULL);
	while (i < len)
	{
		*(x + i) = *(y + i);
		i++;
	}
	return (dst);
}
