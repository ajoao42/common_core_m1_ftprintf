/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:18:36 by ajoao             #+#    #+#             */
/*   Updated: 2026/05/08 17:12:57 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	d_counter(int n)
{
	size_t	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	size_t	s_len;
	char	*s;
	long	lng_num;

	lng_num = n;
	s_len = d_counter(lng_num);
	s = (char *)malloc((s_len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[s_len] = '\0';
	if (lng_num < 0)
	{
		s[0] = '-';
		lng_num = -lng_num;
	}
	else if (lng_num == 0)
		s[0] = '0';
	while (lng_num)
	{
		s[--s_len] = (lng_num % 10) + '0';
		lng_num /= 10;
	}
	return (s);
}
