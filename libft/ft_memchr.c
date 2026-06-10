/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:24:44 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:14:47 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*_s;
	size_t			i;

	i = 0;
	_s = (unsigned char *)s;
	while (i < n)
	{
		if (_s[i] == (unsigned char)c)
			return ((void *)&_s[i]);
		i++;
	}
	return (NULL);
}
/*int main(void)
{
	printf("%s", ft_memchr("abc\0def",'d',7));
	return (0);
}*/
