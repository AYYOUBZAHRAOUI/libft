#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int h;
	char *p;
	if (!s1 || !set)
	{
		if (!s1)
			return (NULL);
		else
			return (ft_strdup(s1));
	}
	i = ft_strlen(s1);
	j = ft_strlen(set);
	k = 0;
	h = i;
	if (i > j && j > 0)
	{
		while (k < i) // if s1 less than set retrun s1;
		{
			if (ft_strncmp(s1 + k, set, j-1) != 0)
				break;
			else
				k = k + j;
		}
		while (i - k > k)
		{
			if (ft_strncmp(s1 + h - j, set, j-1) != 0)
				break;
			else
				h = h - j;
		}
		p = (char *)ft_calloc(h - k + 1, 1);
		if (p == NULL)
			return (NULL);
		return ((char *)ft_memcpy(p, s1 + k, h - k));
	}
	else
	{
		return (ft_strdup(s1));
	}
}
