/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freenullva_extra.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:25:56 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:26:10 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_freenull_va(char **first, ...)
{
	va_list	vargs;
	char	**current;

	va_start(vargs, first);
	ft_freenull(first);
	current = va_arg(vargs, char **);
	while (*current)
	{
		ft_freenull(current);
		current = va_arg(vargs, char **);
	}
	va_end(vargs);
	return (NULL);
}
