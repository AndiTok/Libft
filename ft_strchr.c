/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:33:33 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:57:25 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i] != 0x00)
	{
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	else
		return (NULL);
}

/* int main (void)
{
    char str [] = "testing";
    int c = 's';

 //   printf("%s\n",strchr(str,c));
    printf("%s\n",ft_strchr(str,c));
    return (0);
} */

/* int in_string(char *set, char ch)
{
	while(*set)
	{
		if (*set == ch)
		return (1);
		set++;
	}
	return(0);
}
to loop in the str within in the str??
finding set of character in string
 */