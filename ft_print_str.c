/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_str.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ajoao <ajoao@student.42lisboa.com>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:19:50 by ajoao            #+#    #+#              */
/*   Updated: 2026/06/10 17:57:30 by ajoao           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str)
		return (ft_print_str("(null)"));
	while (*str)
	{
		i += ft_print_chr(*str);
		str++;
	}
	return (i);
}
