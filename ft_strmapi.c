/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:43:34 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/01 19:08:53 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_strmapi
 * LIB					-
 * PROTOTYPE			char
 * 						*ft_strmapi(char const *s, char (*f)(unsigned int,
 * 						char));
 * PARAMS				s: the string on which to iterated
 * 						f: the function to apply to each character
 * RETURN				the string created by multiple applications of 'f'
 * 						NULL if the allocation fails
 * EXTERNAL FUNCT		malloc(3)
 * DESCRIPTION			applies 'f' to each character of 's', and passing its
 * 						index as first argument to create a new string 
 * 						(w/ malloc) resulting from successive applications 
 * 						of 'f'
 * TURN IN FILE			-
 * 						*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rslt;
	size_t	i;

	rslt = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!rslt)
		return (0);
	i = -1;
	while (s[++i] != '\0')
		rslt[i] = f(i, s[i]);
	rslt[i] = '\0';
	return (rslt);
}
