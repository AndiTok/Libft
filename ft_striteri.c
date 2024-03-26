/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:46:47 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 13:06:37 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != 0x00)
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	myf(unsigned int i, char *str)
{
 	printf(" i %d str %s \n", i, str);
}

int main (void)
{
	char str[10] = "hello";
	printf(" str = hello \n");
	ft_striteri(str, myf);
	return (0);
} */

/* cant typecast to return any thing from a void function
it can however output/print int and or char due to 'myf' prototype
so from main > ft_stritert > myf loop till s[i] = 0x00
 */

/* f(i, s) will print hello 5x
f(i, &s[i]) will print 5x but each at pointer i */
