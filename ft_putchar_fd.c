/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atok <atok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:14:05 by atok              #+#    #+#             */
/*   Updated: 2022/10/27 16:16:46 by atok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main (void)
{
   char c = 'A';
   ft_putchar_fd(c, 1);
   return(0);
} */

/* fd = 1 , 2 or 3
1 = std input 
2 = std output 
3 = std error  */

/* int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_putchar_fd((char)argv[1],atoi(argv[2]));
	}
	return (0);
} */