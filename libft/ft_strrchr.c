/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:14:12 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:21:54 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	_c;

	_c = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == _c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == _c)
		return ((char *)&s[0]);
	return (NULL);
}
/*int main(void)
{
	printf("%s", ft_strrchr("Go olG", 'G'));
	return (0);
}*/