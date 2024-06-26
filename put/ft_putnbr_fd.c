/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:00:27 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_putnbr_fd
 * LIB                  -
 * PROTOTYPE            void ft_putnbr_fd(int n, int fd);
 * PARAMETERS           n: the integer to output
 *                      fd: the file descriptor on which to write
 * RETURN VALUES		void
 * EXT FUNCTS           write
 * DESCRIPTION          outputs the integer 'n' to the given file descriptor 
*/

#include "../libft.h"
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long long	nl;

	nl = (long long)n;
	if (nl < 0)
	{
		nl *= -1;
		write(fd, "-", 1);
	}
	if (nl >= 10)
	{
		ft_putnbr_fd((nl / 10), fd);
	}
	c = (unsigned int)(nl % 10) + '0';
	write(fd, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(INT_MIN, 2);
	return (0);
}*/
