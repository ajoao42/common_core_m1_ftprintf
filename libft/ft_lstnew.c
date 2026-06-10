/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:13:40 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:13:33 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nw_node;

	nw_node = malloc(sizeof(t_list));
	if (!nw_node)
		return (NULL);
	nw_node->content = content;
	nw_node->next = NULL;
	return (nw_node);
}
