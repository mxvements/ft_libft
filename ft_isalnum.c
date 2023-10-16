/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:51:40 by luciama2          #+#    #+#             */
/*   Updated: 2023/10/16 16:04:35 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isalnum
 * LIB				ctype.h
 * PROTOTYPE		int isalnum(int c)
 * PARAMS			c: char (in aascii) to test
 * RETURN VALUES	int, 0:false, 1:true, non-zero if true
 * EXTERNAL FUNCTS	ft_isalpha
 * 					ft_isdigit
 * DESCRIPTION		tests for any char for which isalpha or isdigit is true
 */

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
