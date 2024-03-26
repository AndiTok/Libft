/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:30:10 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:49:40 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (str[i] == ch)
			return (&str[i]);
			i++;
	}
	return (NULL);
}
/* 
int main (void)
{
	char str [] = "testing";
	int c = 's';

	printf("%p\n",ft_memchr(str,c,5));
	printf("%s\n",ft_memchr(str,c,5));
	printf("%p\n",memchr(str,c,5));
	printf("%s\n",memchr(str,c,5));
} */

/* The memchr() function locates the first occurrence of c 
(converted to an unsigned char) instring s.

The memchr() function returns a pointer to the byte located,
or NULL if no such byte exists within n bytes. */

/* size_t same as insigned int */

/* c was an int so we typcast/convert 
the int ascii to a char same as the *s*/
