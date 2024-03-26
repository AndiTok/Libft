/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:13:17 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 10:45:57 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	ns = (char *) malloc (sizeof (char) * (ft_strlen(s) + 1));
	if (ns == NULL)
		return (NULL);
	while (s[i] != 0x00)
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = 0x00;
	return (ns);
}

/* char	myf(unsigned int i, char ns)
{
	return ns = 42;
}

#include <stdio.h>

int main (void)
{
    char str[10] = "hello";
	char *output = ft_strmapi(str, myf);
	printf("str = hello \n");
	printf("mapped myf to convert str to ascii '42' \n:%s: \n", output);
	printf(":%d:\n",(unsigned int)ft_strlen(output));
	return (0);
} */

/*  (*f)(i, s[i]) same as f(i, s[i]); */