/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:13:54 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:17:29 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_mem(char **arr, size_t i)
{
	while (i > 0)
	{
		free(arr[--i]);
	}
	free(arr);
}

static size_t	w_count(const char *str, char c)
{
	int		i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (*str)
	{
		if (*str != c && !i)
		{
			i = 1;
			counter++;
		}
		else if (*str == c)
		{
			i = 0;
		}
		str++;
	}
	return (counter);
}

static int	fill_words(char **res, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			res[i] = ft_substr(s, 0, j);
			if (!res[i])
			{
				free_mem(res, i);
				return (0);
			}
			i++;
			s += j;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	counter;
	char	**res;

	if (!s)
		return (NULL);
	counter = w_count(s, c);
	res = (char **)malloc((counter + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!fill_words(res, s, c))
		return (NULL);
	return (res);
}
