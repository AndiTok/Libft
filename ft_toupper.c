/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:51:00 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 16:07:06 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*
int	main(void)
{
	char	c;

	c = 'a';
	printf("%c\n", ft_toupper(c));
	return (0);
}
*/
/*
int	main (void)
{
	char str [] = "abc";

	int i; 
	i = 0;
	while (str[i] != 0x00)
	{
		printf("%c\n",ft_toupper(str[i]));
		i++;
	}
	return (0);
}
*/
/*
int	main (void)
{
	char str [] = "abc";
	char temp = 0;

	int i; 
	i = 0;
	while (str[i] != 0x00)
	{
		temp = ft_toupper(str[i]);
		write(1, &temp, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/