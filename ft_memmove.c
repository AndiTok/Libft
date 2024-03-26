/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:41:51 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 17:08:54 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ud;
	unsigned char	*us;

	ud = (unsigned char *)dest;
	us = (unsigned char *)src;
	if (ud == NULL && us == NULL)
		return (NULL);
	i = 0;
	if (ud < us)
		while (i < n--)
			(*ud++) = (*us++);
	else
	{
		while (n > i)
		{
			ud[n - 1] = us[n - 1];
			n--;
		}
	}
	return (dest);
}

/*
int main(void)
{
	char str [] = "123456";
	printf("%s\n",str);	ft_memmove(str, str+2, 3);
	printf("%s\n",str);
}
*/
/*
	unsigned char *ud;
	ud = (unsigned char*)dest;
	same as
	unsigned char *ud = dest
	OR
	unsigned char *(dest)	
	-
	unsgined char *us;
	us = (unsigned char*)src;
	same as
	const unsigned char *us = src
	OR
	unsigned char*(src)
*/

/* workes with char * as well 
thye just need to be the same type */