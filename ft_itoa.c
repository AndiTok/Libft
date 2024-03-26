/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 08:52:53 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 22:27:56 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *src)
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

int	int_len(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		i;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (n == 0)
		return (strdup("0"));
	i = int_len(n);
	ascii = (char *) malloc(sizeof(char) * (i + 1));
	if (ascii == NULL)
		return (NULL);
	ascii[i] = 0x00;
	i--;
	if (n < 0)
	{
		ascii[0] = '-';
		n = n * -1;
	}
	while (n != 0)
	{
		ascii[i] = '0' + (n % 10);
		i--;
		n = n / 10;
	}
	return (ascii);
}

/* int main (void)
{
	int i;
	i = -1234;

	printf("%s\n",ft_itoa(i));
} */
/* handle max negative size of int as well as 0
becase 0 is 1 byte and need to be shown
allocate enough space in malloc + 1 for the null
int_len count the 'sign' & 'number of char' at base 10
do increment from the back thefore need to put null
if is negative put '-' at [0] 
then * -1 to conver it to '+' aka remove the '-'
we '0' - int modulo(%) to create the first number from the back
then move the araay foward 1 step then only divide by based 10
to create the next ascii(digit) number */