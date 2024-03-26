/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:25:06 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:50:01 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t count)

{
	size_t			i;
	unsigned char	*tmp;

	tmp = str;
	i = 0;
	while (count > i)
	{	
		*tmp = ch;
		tmp++;
		count--;
	}
	return (str);
}

/* 
//#include <stdio.h>
int main(void)
{
	char str [] = "testing123";
	char ch = '-';
	
	ft_memset (str, ch, 7);
//	ft_memset(str + 7,ch,3);
	printf ("%s\n", str);
}
 */
/* strncpy.c?*/
/* stdio header must be before prototype becase of 'size_t'*/
/* can work without stdio header by replacing 'size_t' to int*/
/* but the main ft still need it for printf*/
/*below note reffer to line 22
 * size_t = unsigneg long? so think of size_t as int
 * int can compare wiht int & vice versa for size_t
 * so intead of usually we do int i; need ot use size_t i;
*/
/*
{
	size_t i;
	unsigned char *tmp;
	
	i = 0;
	tmp = (unsigned char *)str;
	while (i < count)
	{
		tmp[i] = ch;
		i++;
	}
//	return (str = tmp);
	return (str);
//	return (tmp);
}
*/
/*
{
	size_t i;
	unsigned char *tmp;

	i = 0;
	tmp = (unsigned char *) str;
	while (i++ < count)
	{
		*tmp = ch;
		tmp++;
	}
	return (str);
}
*/
/*
{
	size_t i;
	unsigned char *tmp;
	
	i = 0;
	tmp = (unsigned char *) str;
	while (count-- > 0)
		*(tmp++) = ch;
	return (str);
}
*/
