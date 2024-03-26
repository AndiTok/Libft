/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:34:42 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 16:06:44 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != 0x00)
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*
int main (void)
{
    char str [] = "testing";
    int c = 't';

    printf("%s\n",strrchr(str,c));
    printf("%s\n",ft_strrchr(str,c));
    return (0);
}
*/
/*
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != 0x00)
		i++;
	while (str[i] != c && str[i] >= 0)
		i--;
	return (&str[i]);
}
*/