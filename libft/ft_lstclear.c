/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:43:03 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:13:11 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt_lst;
	t_list	*current_lst;

	if (!lst || !del)
		return ;
	current_lst = *lst;
	while (current_lst)
	{
		nxt_lst = current_lst->next;
		ft_lstdelone(current_lst, del);
		current_lst = nxt_lst;
	}
	*lst = NULL;
}
