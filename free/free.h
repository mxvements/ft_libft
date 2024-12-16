/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:45:01 by luciama2          #+#    #+#             */
/*   Updated: 2024/12/14 15:39:47 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_H
# define FREE_H
# include <stdarg.h>

void	*ft_freenull(char **s);
void	*ft_freenull_va(char **first, ...);

#endif
