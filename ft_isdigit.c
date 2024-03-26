/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:27:35 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:43:25 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
    printf("%d\n",ft_isdigit('5'));
}
*/

/*
according ascii table
if 0-9 or 48-57 return 1
if other than that it will return 0
EVENTHOUG argv takes in int,
a char is passed on to ft!
*/
