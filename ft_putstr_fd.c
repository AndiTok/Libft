/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:57:40 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 22:58:43 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != 0x00)
	{
		ft_putchar_fd(s[i], 1);
		i++;
	}
	s[i] = 0x00;
}

/* int main (void)
{
	char s [] = "testing";
	ft_putstr_fd(s ,1);
	write(1, "\n", 1);
	return (0);

} */