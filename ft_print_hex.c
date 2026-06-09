/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 17:28:11 by ajoao             #+#    #+#             */
/*   Updated: 2026/06/09 18:46:24 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char c)
{
	char	*base;
	int		i;

	i = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_print_hex(n / 16, c);
	write(1, &base[n % 16], 1);
	i++;
	return (i);
}
