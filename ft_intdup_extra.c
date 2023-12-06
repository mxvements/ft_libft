/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmmielgo <lmmielgo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:36:12 by luciama2          #+#    #+#             */
/*   Updated: 2023/12/06 21:41:28 by lmmielgo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_intdup(const int nbr)
{
	int	*cpy;

	cpy = (int *)malloc(sizeof(int));
	if (!cpy)
		return ((int *)0);
	*cpy = nbr;
	return (cpy);
}
