/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_int.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ajoao <ajoao@student.42lisboa.com>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 16:59:31 by ajoao            #+#    #+#              */
/*   Updated: 2026/06/10 17:29:21 by ajoao           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int nbr)
{
	int				i;
	unsigned int	un;

	i = 0;
	if (nbr < 0)
	{
		i += 1;
		ft_print_chr('-');
		un = (unsigned int)(-(long) nbr);
	}
	else
		un = (unsigned int) nbr;
	if (un >= 10)
		i += (ft_print_int(un / 10) + 1);
	else
		i += 1;
	ft_print_chr((un % 10) + '0');
	return (i);
}
/*
int	main()
{
int i = ft_print_int(-2147483648);
printf("\n %3d", i);
return (0);
}

#include "ft_printf.h"

int	ft_print_int(int nbr)
{
unsigned int	un;
int				i;
i = 0;
if (nbr < 0)
{
i += 1; //ft_print_chr('-');
un = (unsigned int)(-(long) nbr);
}
else
un = (unsigned int) nbr;
if (un >= 10)
i += (ft_print_int(un / 10) + 1);
else
i += 1; //ft_print_chr((un % 10) + '0');
return (i);
}
*/
/*
int	main()
{
int i = ft_print_int(-2147483648);
printf("\n %3d", i);
return (0);
}
*/

/*
void ft_print_nbr(int nbr)
{
unsigned int un;

if (nbr < 0)
{
ft_print_chr('-');
un = (unsigned int)(-(long)nbr);
}
else
un = (unsigned int)nbr;

if (un >= 10)
ft_print_nbr(un / 10);
ft_print_chr((un % 10) + '0');
}
*/

/*
void ft_print_nbr(int nbr)
{
unsigned int un;

if (nbr < 0)
{
ft_print_chr('-');
un = (unsigned int)(-(long)nbr);
}
else
un = (unsigned int)nbr;

if (un >= 10)
ft_print_nbr(un / 10);
ft_print_chr((un % 10) + '0');
}
*/
