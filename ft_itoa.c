/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 20:40:25 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/13 15:24:04 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	unsigned int i;
	long int a = n;
	long int c;
	int b;
	char *p;
	b = -1;
	i = 1;
	if (a < 0 && i++)
		a *= b++;
	c = a;
	while ((a / 10) > 0 && i++)
		a /= 10;
	p = (char *)ft_calloc(i + 1, 1);
	if (p == NULL)
		return (NULL);
	while ((c / 10) > 0)
	{
		p[--i] = (c % 10) + '0';
		c /= 10;
	}
	p[--i] = c + '0';
	if (!b)
		p[--i] = '-';
	return (p);
}