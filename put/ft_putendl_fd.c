/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:15:05 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  ft_putendl_fd.c
 *  LIBRARY					-
 *  PROTOTYPE				void ft_putendl_fd(char *s, int fd)
 *  PARAMS					s: the string to output
 *  						fd: the file descriptor on which to write
 *  RETURN					void
 *  EXTERNAL FUNCT			write
 *  DESCRIPTION				ouputs the string 's' to the given file descriptor
 *                          followed by a new line
 *                         	*/

#include "../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
	return ;
}
