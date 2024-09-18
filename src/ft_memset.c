/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:36 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 06:29:27 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	i = 0;
	x = (unsigned char *)b;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (b);
}
