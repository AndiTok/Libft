/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:39:00 by atok              #+#    #+#             */
/*   Updated: 2022/10/18 17:39:00 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sstrlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != 0x00)
		len++;
	return (len);
}

char	*sstrdup(const char *src)
{
	char	*dup;
	int		i;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == (NULL))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0x00;
	return (dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ss;
	size_t		slen;

	if (len == 0 || s == NULL)
		return (sstrdup(""));
	if (start >= sstrlen(s))
		return (sstrdup(""));
	ss = (char *)malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	slen = 0;
	while (s[start] != 0x00 && slen < len)
	{
		ss[slen] = s[start];
		start++;
		slen++;
	}
	ss[slen] = 0x00;
	return (ss);
}

/* strdup is used because tester require it to show
an empty memory block of 1 byte instead of null...
will effect strtrim where by if trim both side of str
leaves a blank st.. we need to allocate 1 empty byte? */

/* int    main()
{
    char s[] = "Create substring from this string";
    size_t start = 7;
    size_t len = 9;
    char *sub = ft_substr(s, start, len);
    printf("\tsubstring:%s\n", sub);
    free (sub);
}
 */
/* int main (void)
{
	char str [] = "mindidless";
	char *sstr = ft_substr(str,3,4);
	printf (":%s:\n",sstr);
//	printf (":%s:\n",ft_substr(str,4,4));
	free (sstr);
} */

/* int main (void)
{
	char str [] = "mindidless";
//	char *sstr = ft_substr(str,4,4);
//	printf ("%s\n",sstr);
	printf ("%s\n",ft_substr(str,4,4));
} */
//	ans should be "idle"
// need to handle if start >= len
// also if s = 0

/* if(!string) is the same as 
if(string == 0) is the same as 
if(string ==  NULL) */

#include <stdio.h>
int    main()
{
    char s[] = "test";
    size_t start = 1;
    size_t len = 6;
    char *sub = ft_substr(s, start, len);
    printf("\tsubstring:%s\n", sub);
    free (sub);
}
