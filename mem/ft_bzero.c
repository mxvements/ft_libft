/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:13:24 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_bzero
 * LIB				strings.h
 * PROTOTYPE		void (void *s, size_t n)
 * PARAMS			s: address start setting the memory
 * 					n: amount of memory to initialize to 0
 * RETURN VALUES	none
 * EXTERNAL FUNCTS	ft_memset
 * DESCRIPTION		erases the data int the 'n' bytes of the memory starting
 * 					at the location pointed by 's', by writing '0' in the area
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
