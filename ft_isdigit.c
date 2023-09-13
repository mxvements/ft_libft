/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:30:16 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/13 12:14:31 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ctype.h
 * int	isdigit(int c)
 * test for decimal digit character (asccii 48 to 57)
 * return
 * 0 if false
 * non-zero (1) if true
 */

int	ft_isdigit(int c)
{
	int	option;

	option = 0;
	if (c >= 48 && c <= 57)
		option = 1;
	return (option);
}
