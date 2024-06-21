/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciammielgo <luciammielgo@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:02 by luciama2          #+#    #+#             */
/*   Updated: 2024/06/21 18:32:24 by luciammielg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
