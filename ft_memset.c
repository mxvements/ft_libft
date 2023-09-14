/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:55:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/14 15:19:11 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* string.h
 * void	*memset(void *b, int c, size_t len)
 * writes len bytes of value c (converted to unsigned char to the str b.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;

	while (i < len || b[i] != '\0')
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
