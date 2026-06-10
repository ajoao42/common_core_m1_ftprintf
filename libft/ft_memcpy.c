/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 13:20:44 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:15:14 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;
	size_t			i;

	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	i = 0;
	if (!_dest && !_src)
		return (NULL);
	while (i < n)
	{
		_dest[i] = _src[i];
		i++;
	}
	return (dest);
}
/*int main(void)
{
	char dst[20] = "";
	char orgn[5] = "";
	
	printf("retorn %s",ft_memcpy(dst, orgn, 13));
	return (0);
}*/