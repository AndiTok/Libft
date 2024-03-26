/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:42:28 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 16:40:57 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ud;
	unsigned char	*us;

	ud = (unsigned char *)dest;
	us = (unsigned char *)src;
	if (ud == NULL && us == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ud[i] = us[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int main (void)
{
		char str [] = "123456789";

	printf("%s\n", str);
	memcpy(str+2, str, 6);
	//ft_memcpy(str+2, str, 6);	
	printf("%s\n", str);
} */

/*copy from source to destination on same str using stize_t
 * memory/address overlap happen if dest and src shares the same str
 * && used the same character address of the shared str
 * 
 * if *src >= *dest overlap regardless of n but no issue 
 * if *src < *dest && (*src > n || *src + n > *dest) ... 
 * overlap happend
 * 
 * NO issue if cpy from end(right) to beginning(left) but 
 * will have issue if cpy from left to right 
 */
