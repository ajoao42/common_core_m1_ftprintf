/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_undec.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ajoao <ajoao@student.42lisboa.com>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/16 14:59:50 by ajoao            #+#    #+#              */
/*   Updated: 2026/06/10 17:39:18 by ajoao           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_undec(unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr >= 10)
		i += ft_print_undec(nbr / 10);
	i += ft_print_chr((nbr % 10) + '0');
	return (i);
}
/*
int main(void)
{
unsigned    int dec = -2147483648;
printf ("%d",ft_print_undec(dec));
return (0);
}*/
