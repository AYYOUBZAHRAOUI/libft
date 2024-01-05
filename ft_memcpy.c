/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:31 by ayzahrao          #+#    #+#             */
/*   Updated: 2023/12/27 17:21:32 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, unsigned int len)
{
	unsigned char *x;
	unsigned char *y;
	unsigned int i;
	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		*(x + i) = *(y + i);
		i++;		
	}
	return (dst);
}