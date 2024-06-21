/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 09:08:08 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  ft_putstr_fd
 *  LIB					-
 *  PROTOTYPE			void ft_putstr_fd(char *s, int fd)
 *  PARAMS				s: the string to output
 *  					fd: file descriptor on which to write
 *  RETURN VALUES		void
 *  EXTERNAL FUNCT		<unistd.h> write
 *  DESCRIPTION			outputs the string 's' to the given file descriptor
 *  */

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	return ;
}
