/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:34 by ayzahrao          #+#    #+#             */
/*   Updated: 2023/12/27 17:21:35 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memmove(void *dst, const void *src, unsigned int len)
{
	if (src < dst)
	{
		unsigned char *x;
		unsigned char *y;
		x = (unsigned char *)dst;
		y = (unsigned char *)src;
		while (len)
		{
			--len;
			x[len] = y[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}