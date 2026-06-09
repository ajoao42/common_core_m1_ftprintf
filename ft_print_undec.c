/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 14:59:50 by ajoao             #+#    #+#             */
/*   Updated: 2026/06/09 18:46:40 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check_nbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_print_chr('-');
		ft_print_chr('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		ft_print_chr('-');
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ft_print_chr(nbr + 48);
		return ;
	}
	if (nbr > 9)
	{
		ft_check_nbr(nbr / 10);
		ft_check_nbr(nbr % 10);
	}
}

int	ft_print_undec(unsigned int nbr)
{
	unsigned int	i;

	i = 1;
	ft_check_nbr(nbr);
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	unsigned    int dec = -2147483648;
	printf ("%d",ft_print_undec(dec));
	return (0);
}*/
