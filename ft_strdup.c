/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:46:16 by atok              #+#    #+#             */
/*   Updated: 2022/10/18 15:46:16 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
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

/* int main (void)
{
	char str[] = "test";
	printf(":%s:\n",ft_strdup(str));
	printf(":%s:\n",strdup(str));

	return (0);
} */

/* int main (int ac, char **av)
{
	char *mine;
	char *theirs;

	if (ac == 2)
	{
		mine = ft_strdup(av[1]);
		theirs = strdup(av[1]);
		printf (":%s:\n:%s:\n",mine, theirs);
	}
	return (0);
} */
/* (*s) same as (s[])... stick to basic better []
strinsg will always ternimate at NULL pointer ?
0x00 same as '\0' same as null
sizeof? 
if(!(...)) same mean if... is not */

/* other way */

/* size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != 0x00)
		len++;
	return (len);
} */

/* //	if (!(dup = malloc(sizeof(char) * (ft_strlen(src) + 1))))
	len = 0;
	while (src[len])
		len++;
//	if (!(dup = malloc(sizeof(char) * (len + 1))))
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == (NULL))
		return (NULL); */

/* if (!(dup = malloc(sizeof(char) * (ft_strlen(src) + 1)))) */

/* 	len = 0;
	while (src[len])
		len++;
if (!(dup = malloc(sizeof(char) * (len + 1))))
		return (NULL); */