/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:52:35 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:17:38 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	_c;
	size_t	i;

	i = 0;
	_c = (char)c;
	while (s[i])
	{
		if (s[i] == _c)
			return ((char *)&s[i]);
		i++;
	}
	if (_c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*int main(void)
{
	printf("%s", ft_strchr("Go ol", 'o'));
	return (0);
}*/