/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:41:50 by atok              #+#    #+#             */
/*   Updated: 2022/10/12 15:41:50 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (n > i)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/* 
int main (void)
{
	char str1 [] = "AAAAA";
	char str2 [] = "AACBA";

	printf("m=%d\n",ft_memcmp(str1,str2,0));
	printf("m=%d\n",ft_memcmp(str1,str2,1));
	printf("m=%d\n",ft_memcmp(str1,str2,2));
	printf("m=%d\n",ft_memcmp(str1,str2,3));
	printf("m=%d\n",ft_memcmp(str1,str2,4));
	printf("m=%d\n",ft_memcmp(str1,str2,5));
	printf("m=%d\n",ft_memcmp(str1,str2,6));
	printf("m=%d\n",ft_memcmp(str1,str2,7));
	printf("m=%d\n",ft_memcmp(str1,str2,8));
	printf("%d\n",0);
	printf("0>%d\n",memcmp(str1,str2,0));
	printf("AA=%d\n",memcmp(str1,str2,1));
	printf("AA=%d\n",memcmp(str1,str2,2));
	printf("AC=%d\n",memcmp(str1,str2,3));
	printf("AB=%d\n",memcmp(str1,str2,4));
	printf("AA=%d\n",memcmp(str1,str2,5));
	printf("nulnul?=%d\n",memcmp(str1,str2,6));
	printf("?=%d\n",memcmp(str1,str2,7));
	printf("?=%d\n",memcmp(str1,str2,8));

	return (0);
} */

/*check the first difference in s1 & s2*/
/* size_t same as insigned int*/