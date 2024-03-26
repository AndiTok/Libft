/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:53:02 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 22:17:45 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while ((char)str[len] != 0x00)
		len++;
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
//	char *str;
//	str = "test";
//	printf("%d\n",ft_strlen(str));

//	char str[] = "test";
//	printf("%d\n",ft_strlen(str));
	
	printf("%zu\n",ft_strlen("test"));
	return (0);
}
*/

/*
 * 3 way to test/implement/RUN the function
 */

/* size_t is always paired with const char & 
need stdio.h to run... also need printf(%zu... */