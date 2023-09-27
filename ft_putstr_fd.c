/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:08:08 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/27 09:08:13 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  ft_putstr_fd
 *
 *  prototype           void    ft_putstr_fd(char *s, int fd)
 *  param               s: the string to output
 *                      fd: file descriptor on which to write
 *  return              none
 *  external funct      <unistd.h> write
 *  descr               outputs the string 's' to the given file descriptor
*/

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    if (!s)
        return ;
    while (s[i] != '\0')
        write(fd, &s[i++], 1);
}