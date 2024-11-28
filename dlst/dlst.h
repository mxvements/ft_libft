/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciama2 <luciama2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:48:39 by luciama2          #+#    #+#             */
/*   Updated: 2024/11/28 20:50:18 by luciama2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLST_H
# define DLST_H

typedef struct s_dll
{
	void			*content;
	struct s_dll	*next;
	struct s_dll	*prev;

}	t_dll;

void	ft_dllfree(t_dll **head);
t_dll	*ft_dllnew(void *content);
void	ft_dlladd_front(t_dll **lst, t_dll *new);
int		ft_dllsize(t_dll *lst);
t_dll	*ft_dlllast(t_dll *lst);
void	ft_dlladd_back(t_dll **lst, t_dll *new);
void	ft_dlldelone(t_dll *lst, void (*del)(void *));
void	ft_dllclear(t_dll **lst, void (*del)(void *));
void	ft_dlliter(t_dll *lst, void (*f)(void *));
t_dll	*ft_dllmap(t_dll *lst, void *(*f)(void *), void (*del)(void *));

#endif