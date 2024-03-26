/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 08:55:45 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 13:00:01 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	tstrlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len] != 0x00)
		len++;
	return (len);
}

char	*tstrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i] != 0x00)
	{
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	else
		return (NULL);
}

char	*tstrdup(const char *src)
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

char	*tsubstr(char const *s, unsigned int start, size_t len)
{
	char		*ss;
	size_t		slen;

	if (len == 0 || *s == 0x00)
		return (ft_strdup(""));
	if (start >= tstrlen(s))
		return (0);
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

char	*ft_strtrim(char const *s, char const *set)
{
	size_t		d;
	size_t		r;
	char		*ns;

	if (!s || !set)
		return (NULL);
	d = 0;
	while (s[d] && tstrchr(set, s[d]))
		d++;
	r = tstrlen(s) - 1;
	while (r > d && tstrchr(set, s[r]))
		r--;
	if (r - d == 0)
		return (ft_strdup(s));
	ns = tsubstr(s, d, r - d + 1);
	return (ns);
}

/* int main (void)
{
	char s[] = "231middle31";
	char set[] = "123";
	printf("%s\n", ft_strtrim(s,set));
} */

/* so... trtimming the s then malloc to ns
need to strchr to trim front by ++ and back by --
so null check if s or set has ntg
s & strchr set will ++ move together
strchr will look to check if any set matches the s
it checks till null then it will terminate proceed to strlen
to reach the end and strchr from back to start
finally malloc and retrun whats ever is left*/

/* could have used strchr for front and strrchr for back
then back - front index to get the len then malloc with answer */
