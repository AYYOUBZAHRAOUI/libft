/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:22:05 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/03 15:58:42 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	int i;
	i = ft_strlen(s) + 1;
	while (i)
	{
		i--;
		if (s[i] == (char)c)
			return (char *)(s + i);
	}
	return (NULL);
}