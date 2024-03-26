/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:26:55 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 17:22:59 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lstrlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != 0x00)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dl;
	size_t	sl;
	size_t	dcl;
	size_t	scl;
	size_t	i;

	if ((dest == 0x00 || src == 0x00) && n == 0)
		return (0);
	dl = lstrlen(dest);
	sl = lstrlen((char *)src);
	if (n <= dl)
		return (sl + n);
	dcl = lstrlen(dest);
	scl = 0;
	i = n - dcl - 1;
	while (src[scl] != 0x00 && i != 0)
	{
		dest[dcl] = src[scl];
		dcl++;
		scl++;
		i--;
	}
	dest[dcl] = 0x00;
	return (dl + sl);
}

/*   int	main(void)
{
	char src [] = "back";
	char dest [50] = "front";

	printf("%lu\n",ft_strlcat(dest,src,0));
	printf("%lu\n",ft_strlcat(dest,src,1));
	printf("%lu\n",ft_strlcat(dest,src,2));
	printf("%lu\n",ft_strlcat(dest,src,3));
	printf("%lu\n",ft_strlcat(dest,src,4));
	printf("%lu\n",ft_strlcat(dest,src,5));
	printf("%lu\n",ft_strlcat(dest,src,6));
	printf("%lu\n",ft_strlcat(dest,src,7));
	printf("0-4%lu\n",strlcat(dest,src,0));
	printf("1-5%lu\n",strlcat(dest,src,1));
	printf("2-6%lu\n",strlcat(dest,src,2));
	printf("3-7%lu\n",strlcat(dest,src,3));
	printf("4-8%lu\n",strlcat(dest,src,4));
	printf("5-9%lu\n",strlcat(dest,src,5));
	printf("6-9%lu\n",strlcat(dest,src,6));
	printf("7-.. %lu\n",strlcat(dest,src,7));

	return (0);
}  */

/*allocated eough char dest space to 
prevent illegal hardware instruction or over flow*/
/* had to short hand because too long */
/* length count wihtout null?*/
/* size count the null?*/
/* need to allocate space/size for char dest... */
/* still need to run strcat apparently -.-" */
/* strncat(dest, (char *)src, i); */
/* i = size - dest len - 1 */
/* the len of src append to dest */

/* if n <= dl return dl
if n > dl return dl + sl
append n - dl - 1
size - dest len - dest null
the left over from equation above /\
becomes the src len to be appende to dest '\0'
then + 1 for null  */
