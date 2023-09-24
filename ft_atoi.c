/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:03:34 by luciama2          #+#    #+#             */
/*   Updated: 2023/09/24 18:47:26 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** *
 * lib			stdlib.h
 *
 * prototype	int atoi(const char *str)
 *
 * descr		convert initial portion of str to int representation
 *
 * notes		stops whenever theres a not accepted char
 * 				first discards as many whitespace char (isspace) until the
 * 				1st non-whitespace is found
 * 				takes an optionl plus or minus sign followed by as many
 * 				base-10 digits as posisible
 *
 * retun		int representation
 * 				if no valid conversion, returns (0)
 *****************************************************************************/

#include "libft.h"


