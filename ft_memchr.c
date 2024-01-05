/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:26 by ayzahrao          #+#    #+#             */
/*   Updated: 2023/12/27 17:21:27 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char *x;
	unsigned char y;
	y = (unsigned char)c;
	x = (unsigned char *)s;
	unsigned int i;
	i = 0;
	while (i < n)
	{
		if (y == x[i])
			return (void *)(x + i);
		else
			i++;
	}
	return (0);
}