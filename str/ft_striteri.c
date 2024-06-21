/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:09:00 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:58:08 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/* ft_striteri
 * LIB					-
 * PROTOTYPE			void
 * 						ft_striteri(char *s, void (*f)(unsigned int, char*));
 * PARAMS				s:	the string to iterate
 * 						f:	the function to apply to each character
 * RETURN VALUES		void
 * EXTERNAL FUNCT		-
 * DESCRIPTION			applies 'f' on each character of the string passed as
 * 						argument, passing its index as first argument. 
 * 						each character is passed by address to 'f' to be mod
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	while (s[++i] != '\0')
		f(i, &s[i]);
	return ;
}
