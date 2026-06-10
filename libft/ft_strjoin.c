/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:54:50 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:18:36 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s_join;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_join = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!s_join)
		return (NULL);
	ft_strlcpy(s_join, s1, s1_len + 1);
	ft_strlcpy(s_join + s1_len, s2, s2_len + 1);
	return (s_join);
}
