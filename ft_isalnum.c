/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:38:49 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:43:07 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9')
		|| (a >= 'A' && a <= 'Z')
		|| (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main (void)
{
    printf("%d\n",ft_isalnum('%'));
}
*/

/*
according to man isalnum
use ' ' better as it applies to all
base decimals
*/
