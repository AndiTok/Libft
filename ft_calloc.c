/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:23:11 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 12:32:25 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*cstrdup(const char *src)
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

void	bezero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = str;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0x00;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocate;

	if (size == 0 || count == 0)
		return (cstrdup(""));
	if (count >= SIZE_MAX / size)
		return (NULL);
	allocate = malloc(count * size);
	if (allocate == NULL)
		return (NULL);
	bezero(allocate, count * size);
	return (allocate);
}

/* #include <stdio.h>

int main (void) 
{
 	char	*str = ft_calloc(5,5);
	write(1, str, 8);
	write(1, "\n", 1);
	free(str);
	// printf("%s\n",calloc (5,5));
	// write(1, ft_calloc(5,5), 8);
	// write(1, "\n", 1);
} */

/* to run use
gcc -fsanitize==address ft_calloc.c && ./a.out

need to free it if not fsanitize will make noise

change the ft_bzero to bzero & remove ft_bzero function*/

/* if (count * size >= SIZE_MAX)
same as
	   if (count >= SIZE_MAX / size) */

/* if size is == 0 it should retrun an empty freeable string */