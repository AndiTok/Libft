/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skmemcmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:22:12 by sukilim           #+#    #+#             */
/*   Updated: 2022/10/27 16:39:33 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*s_one;
	unsigned char	*s_two;

	s_one = (unsigned char *)s1;
	s_two = (unsigned char *)s2;
	i = 0;
	while (s_one[i] != '\0' && s_two[i] != '\0' && i <= n)
	{
		if (s_one[i] == s_two[i] && i == --n)
			return (s_one[i] - s_two[i]);
		else if (s_one[i] == s_two[i])
			i++;
		else
			return (s_one[i] - s_two[i]);
	}
	return (0);
}

// int main ()
// {
//     char str1[] = "Thllo world";
//     char str2[] = "Teis is 8reat";
//
//     printf("%d \n", ft_memcmp(str1, str2, 14));
// printf("%d", memcmp(str1, str2, 14));
// }
