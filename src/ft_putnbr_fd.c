/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 03:58:38 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/18 01:06:02 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;
	char		p[1];

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x *= -1;
	}
	if (x / 10 > 0)
		ft_putnbr_fd(x / 10, fd);
	*p = ((x % 10) + '0');
	write(fd, p, 1);
}
