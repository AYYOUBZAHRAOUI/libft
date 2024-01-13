/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayzahrao <ayzahrao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:22:13 by ayzahrao          #+#    #+#             */
/*   Updated: 2024/01/12 19:59:12 by ayzahrao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
int		ft_isalnum(int c); // ft_isdigit() , ft_isalpha()
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
int	ft_toupper(int c);
int	ft_tolower(int c); // ft_strlen()
int	ft_strncmp(const char *s1, const char * s2, unsigned int n);
void	*ft_memset(void *b, int c, unsigned int n);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void *ft_memmove(void *dst, const void *src, unsigned int len);
int ft_strlcpy(char * dst, const char * src, unsigned int dstsize); // ft_strlen()
int ft_strlcat(char * dst, const char * src, unsigned int dstsize);
int ft_atoi(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
int ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);