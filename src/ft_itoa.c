/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:40:25 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/20 01:39:24 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static unsigned int	allocation_size(int n)
{
	unsigned int	i;
	long int		a;

	a = n;
	i = 1;
	if (a < 0)
	{
		a *= -1;
		i++;
	}
	while ((a / 10) > 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			b;
	int			size;
	char		*p;
	long int	a;

	a = n;
	size = allocation_size(n);
	p = (char *)ft_calloc(size + 1, 1);
	if (p == NULL)
		return (NULL);
	b = -1; 
	if (a < 0)
		a *= b++;
	while ((a / 10) > 0)
	{
		p[--size] = (a % 10) + '0';
		a /= 10;
	}
	p[--size] = a + '0';
	if (!b)
		p[--size] = '-';
	return (p);
}
