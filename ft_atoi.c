/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:30:59 by atok              #+#    #+#             */
/*   Updated: 2022/10/25 15:42:41 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * sign);
}

/* int main (void)
{
	char str [] = "\e343";
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));

	return (0);
} */

/* handle the space before the sign */

/*
		if (*str++ == '-')
	{
		sign *= -1;
		str++;
	}
	will increment pass the 0 becomes 1 in the array
	becase it ++ 2x

	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	this will chec the 0 before incrementing
*/