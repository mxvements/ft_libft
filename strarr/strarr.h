/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strarr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:38:17 by luciama2          #+#    #+#             */
/*   Updated: 2024/12/06 12:44:24 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRARR_H
# define STRARR_H

/**
 * join -> concat
 * 
 * includes
 * find(element),
 * findidx
 * findlast
 * findlastidx
 * 
 * flat, version of flatten
 * slice(start, end)
 * splice(start, deleteCount, item1...itemN)
 * reverse
 * 
 * map(callbackFunctio), apply funct to array
 * 
 * pop(void), removes de last element
 * push(void), adds to the end
 * shift(void), removes the 1st element
 */

char	**strarr_add(char **sa_src, char *s);
char	**strarr_concat(char **sa1, char **sa2);
char	*strarr_flatten(int idx, char **sa, char *sep);
int		strarr_len(char **sa);
char	*strarr_free_element(char **sa);
char	*strarr_freenull(char ***sa);
void	strarr_print(char **str);

#endif