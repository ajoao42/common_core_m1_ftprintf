/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:56:00 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:13:28 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*nw_lst;
	t_list	*nw_node;
	void	*nw_content;

	if (!lst || !f || !del)
		return (NULL);
	nw_lst = NULL;
	while (lst)
	{
		nw_content = f(lst->content);
		if (!nw_content)
		{
			ft_lstclear(&nw_lst, del);
			return (NULL);
		}
		nw_node = ft_lstnew(nw_content);
		if (!nw_node)
		{
			ft_lstclear(&nw_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&nw_lst, nw_node);
		lst = lst->next;
	}
	return (nw_lst);
}
