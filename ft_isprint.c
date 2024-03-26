/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:14:11 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:43:33 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int p)
{
	if (p >= 32 && p <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d\n",ft_isprint(16));
}
*/

/* ascii decimal set
 * 0 to 31 * 127 are not printable characters
 * only 32 to 126 are printable
 */
