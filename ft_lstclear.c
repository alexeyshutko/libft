/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolyxen <gpolyxen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:21:57 by gpolyxen          #+#    #+#             */
/*   Updated: 2022/07/07 15:21:59 by gpolyxen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		clear = *lst;
		*lst = (*lst)->next;
		free (clear);
	}
	lst = NULL;
}
