/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:00:27 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 16:49:49 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_putnbr_fd
 * LIB                  -
 * PROTOTYPE            void    ft_putnbr_fd(int n, int fd);
 * PARAMETERS           n: the integer to output
 *                      fd: the file descriptor on which to write
 * RETURN               none
 * EXT FUNCTS           write <unistd.h>
 * DESCRIPTION          outputs the integer 'n' to the given file descriptor 
 * */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	nl;

	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
	}
	nl = (long) n;
	if (nl >= 10)
		ft_putnbr_fd((int)nl / 10, fd);
	c = (nl % 10) + '0';
	write(fd, &c, 1);
}
