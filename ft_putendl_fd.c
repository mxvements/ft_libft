/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:15:05 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/27 09:15:06 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  ft_putendl_fd.c
 *  lib                     no lib - aditional functions
 *  prototype               void    ft_putendl_fd(char *s, int fd)
 *  param                   s: the string to output
 *                          fd: the file descriptor on which to write
 *  return value            none
 *  external funct          write
 *  description             ouputs the string 's' to the given file descriptor
 *                          followed by a new line
*/

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    if (!s)
        return ;
    while (s[i] != '\0')
        write(fd, &s[i++], 1);
    write(fd, "\n", 1);
}