/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:22:08 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:15:47 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int v, size_t n)
{
	unsigned char	*_ptr;
	unsigned char	_v;
	size_t			i;

	_ptr = (unsigned char *)ptr;
	_v = (unsigned char)v;
	i = 0;
	while (i < n)
	{
		_ptr[i] = _v;
		i++;
	}
	return (_ptr);
}
