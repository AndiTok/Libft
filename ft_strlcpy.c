/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:01:47 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 16:03:53 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != 0x00)
		i++;
	if (n != 0)
	{
		j = 0;
		while (src[j] != '\0' && n - 1 != 0)
		{
			dest[j] = src[j];
			j++;
			n--;
		}
		dest[j] = 0x00;
	}
	return (i);
}
/*
int main(void)
{
	char src [] = "test";
	char dest [7] = "";

	printf("m%lu\n",ft_strlcpy(dest,src,0));
	printf("m%lu\n",ft_strlcpy(dest,src,1));
	printf("m%lu\n",ft_strlcpy(dest,src,2));
	printf("m%lu\n",ft_strlcpy(dest,src,3));
	printf("m%lu\n",ft_strlcpy(dest,src,4));
	printf("m%lu\n",ft_strlcpy(dest,src,5));
	printf("m%lu\n",ft_strlcpy(dest,src,6));
	printf("m%lu\n",ft_strlcpy(dest,src,7));
	printf("m%lu\n",ft_strlcpy(dest,src,8));
	printf("m%lu\n",ft_strlcpy(dest,src,9));
	printf("m%lu\n",ft_strlcpy(dest,src,10));
	printf("0%lu\n",strlcpy(dest,src,0));
	printf("1%lu\n",strlcpy(dest,src,1));
	printf("2%lu\n",strlcpy(dest,src,2));
	printf("3%lu\n",strlcpy(dest,src,3));
	printf("4%lu\n",strlcpy(dest,src,4));
	printf("5%lu\n",strlcpy(dest,src,5));
	printf("6%lu\n",strlcpy(dest,src,6));
	printf("7%lu\n",strlcpy(dest,src,7));
	printf("x%lu\n",strlcpy(dest,src,8));
	printf("x%lu\n",strlcpy(dest,src,9));
	printf("x%lu\n",strlcpy(dest,src,10));

	return(0);
}
*/
/* if dest [7] max for n is 7*/
/* beyond that should overflow */
/* dest must be > src space */
