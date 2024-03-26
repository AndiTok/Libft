/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:07:09 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 23:48:17 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*str;
	const char	*find;
	size_t		i;
	size_t		j;

	str = haystack;
	find = needle;
	if (*find == 0x00)
		return ((char *) str);
	if (len == 0)
		return (NULL);
	i = 0;
	j = 0;
	while ((str[i] != 0x00) && (len > i + j))
	{
		j = 0;
		while (str[i + j] == find[j] && len > i + j)
		{
			if (find[j + 1] == 0x00)
				return ((char *) str + i);
					j++;
		}
		i++;
	}
	return (NULL);
}
/* 
int main (void)
{
	char str [] = "test ting tong";
	char find [] = "ting";

//	printf("%s\n",ft_strnstr(str,find,10));
	printf("%s\n",ft_strnstr(str,find,0));
	printf("%s\n",ft_strnstr(str,find,1));
	printf("%s\n",ft_strnstr(str,find,2));
	printf("%s\n",ft_strnstr(str,find,3));
	printf("%s\n",ft_strnstr(str,find,4));
	printf("%s\n",ft_strnstr(str,find,5));
	printf("%s\n",ft_strnstr(str,find,6));
	printf("%s\n",ft_strnstr(str,find,7));
	printf("%s\n",ft_strnstr(str,find,8));
	printf("%s\n",ft_strnstr(str,find,9));
	printf("%s\n",ft_strnstr(str,find,10));
	printf("%s\n",strnstr(str,find,0));
	printf("%s\n",strnstr(str,find,1));
	printf("%s\n",strnstr(str,find,2));
	printf("%s\n",strnstr(str,find,3));
	printf("%s\n",strnstr(str,find,4));
	printf("%s\n",strnstr(str,find,5));
	printf("%s\n",strnstr(str,find,6));
	printf("%s\n",strnstr(str,find,7));
	printf("%s\n",strnstr(str,find,8));
	printf("%s\n",strnstr(str,find,9));
	printf("%s\n",strnstr(str,find,10)); 

	return (0);
}
 */
/* if find empty string or == 0x00 return str
if find cannot be found  return (NULL)
if find found return find */