/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:00:27 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/12 16:27:56 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ft_putnbr_fd
 * lib                  -
 * prototype            void    ft_putnbr_fd(int n, int fd);
 * parameters           n: the integer to output
 *                      fd: the file descriptor on which to write
 * return               none
 * ext functs           write
 * description          outputs the integer 'n' to the given file descriptor 
*/

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char       c;
    long long   nl;

    if (n < 0)
    {
        n *= -1;
        write(fd, "-", 1);
    }
    nl = (long) n;
    if (nl >= 10)
    {
        ft_putnbr_fd((int)nl / 10, fd);
    }
    c = (nl % 10)  + '0';
    write(fd, &c, 1);
}
