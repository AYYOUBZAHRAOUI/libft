/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:04:42 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/07 18:35:52 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char **setfunc(char **p,const char *s, char c)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0; 
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		if (j > 0)
		{
			p[k] = ft_substr(s, i, j);
			if (p[k] == NULL)
			{
				free(p);
				return NULL;
			}
			k++;
			i += j;
		}
		else
			i++;
	}
	p[k] = NULL;
	return (p);
}


char **ft_split(char const *s, char c)
{
	unsigned int i;
	unsigned int element;
	char **p;
	
	if (NULL == s)
		return (NULL);
	i = 0;
	element = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && (s[i + 1] == c ||  s[i + 1] == '\0'))
			element++;
		i++;	
	}
	p = (char **)malloc(8 * (element + 1));
	if (p == NULL)
		return NULL;
	return (setfunc(p, s, c));
}