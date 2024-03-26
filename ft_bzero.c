/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:07:31 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:42:48 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = str;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
/*
#include <unistd.h>
int main(void)
{
	char str [] = "testing";
	ft_bzero(str+4,2);
	write(1, str, 8);
	write(1, "\n", 1);
}
*/
/*
 * printf dont work because it recognise null as the terminator
 * can test by chaning the 0 in  tmp[i] = x to anything else
 * also before printf ft_bzero(str + 4 , 2); to shift the array in str
 * by shifting the array forward it will show 'test' only
 * but should to show 'testxxg'
 */
