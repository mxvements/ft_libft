/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 16:04:47 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isalpha
 * LIB					ctype.h
 * PROTOTYPE			int isalpha(int c)
 * PARAMS				c: char to check in ascii representation
 * RETURN VALUES		int, 0:false, 1:true, non-zero if true
 * EXTERNAL FUNCTIONS	ft_islower
 * 						ft_isupper
 * DESCRIPTION			test for any character for which ispper & islower
 * 						are true.
 */

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}