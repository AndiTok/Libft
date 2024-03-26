/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:07:17 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 17:10:44 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > i)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == 0x00 || s2[i] == 0x00)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* int main (void)
{
	char str1 [] = "AAAAA";
	char str2 [] = "AACBA";

	printf("%d\n",ft_strncmp(str1, str2,3));
	printf("%d\n",strncmp(str1, str2,3));
} */

/* expected to handle extended ascii table up to 255? 
example between /200 & /0  there fore need unsigned char
char ascii max 127 unsigned/long char ascii man 255*/

/* 
size_t as in size & not array
so 1 2 3 and not 0 1 2
it will stop at the difference and return s1 - s2
stize_t n is the limiter
if all the same then return 0
*/