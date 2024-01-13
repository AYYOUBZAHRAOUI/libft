/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:26:44 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/13 23:34:55 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	unsigned int j;
	char *p;
	i = 0;
	j = ft_strlen(s);
	p = ft_calloc(j + 1, 1);
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}