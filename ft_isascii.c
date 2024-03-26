/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:59:14 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:43:17 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_isascii(127));
}
*/

/*
 * ascii table decimal set
 * from 0 nul to 127 del
 * IF USING octal or hexa
 * octal fomat is 4 digits 0177 = del
 * hexa is starts with 0x SO 0x7f = del
 * & finally 127 = del
 */
