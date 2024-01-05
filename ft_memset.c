/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:21:36 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/05 16:42:38 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, unsigned int n)
{
	unsigned char *x;
	unsigned int i;
	i = 0;
	x = (unsigned char *)b;
	while (i < n)
	{
		x[i] = c;
		i++;
	}
	return (b);
}
