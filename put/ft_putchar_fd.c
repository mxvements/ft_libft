/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:06:53 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_putchar_fd
 * LIBRARY			-
 * PROTOTYPE		void ft_putchar_fd(hcar c, int fd)
 * PARAMS			c: char output
 *					fd: file descr on which to write
 * RETURN VALUES    -
 * EXTERNAL FUNCT   write from <unistd.h>
 * DESCRIPTION      outputs the char 'c' to the given file descriptor
 * */

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
