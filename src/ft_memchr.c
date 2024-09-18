/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:26 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 06:28:28 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;
	unsigned char	y;
	size_t			i;

	y = (unsigned char) c;
	x = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (y == x[i])
			return ((void *)(x + i));
		else
			i++;
	}
	return (0);
}
