/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:53 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/30 20:31:30 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************************************************************
 * prototype        void    ft_putchar_fd(hcar c, int fd)
 * 
 * param            c: char output
 *                  fd: file descr on which to write
 *
 * external funct   write from <unistd.h>
 * return           none
 * descr            outputs the char 'c' to the given file descriptor
 * ***************************************************************************/

#include "libft.h"

 void   ft_putchar_fd(char c, int fd)
 {
    write(fd, &c, 1);
 }
