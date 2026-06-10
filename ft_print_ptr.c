/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_ptr.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ajoao <ajoao@student.42lisboa.com>        #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/05/13 17:09:19 by ajoao            #+#    #+#              */
/*   Updated: 2026/06/10 17:50:09 by ajoao           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_ul(unsigned long n, char c)
{
	char	*base;
	int		i;

	i = 0;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_print_hex_ul(n / 16, c);
	write(1, &base[n % 16], 1);
	i++;
	return (i);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	ul;
	int				i;

	if (!ptr)
		return (ft_print_str("(nil)"));
	ul = (unsigned long) ptr;
	i = 0;
	i += ft_print_str("0x");
	i += ft_print_hex_ul(ul, 'x');
	return (i);
}
/*
int main(void)
{
char *i = "123456789";
printf("\n%d\n",ft_print_ptr(i));
printf("\n%p\n", i);
return	(0);
}
*/
/*
#include "ft_printf.h"
static char	*
int	ft_print_ptr(void *ptr)
{
unsigned long ul;
int	i;

if (!ptr)
return (ft_print_str("(nil)"));
ul = (unsigned long)ptr;
i = 0;
i += ft_print_str("0x");
i += ft_print_hex(ul, 'x');
return (i);
}
int main(void)
{
char *i = "123456789";
princreate_string(unsigned long value, int *strlen)
{
int				i;
unsigned long	temp;
char			*str;

i = 0;
temp = value;
while (temp != 0)
{
temp = temp / 16;
i++;
}
str = calloc(i + 1, sizeof(char));
*strlen = i - 1;
return (str);
}

int	print_pointer(unsigned long value, int asc)
{
unsigned long	tempval;
char			*printout;
int				i;
int				*iptr;

iptr = &i;
tempval = value;
printout = create_string(value, iptr);
if (!printout)
return (0);
while (tempval != 0 && i-- >= 0)
{
if ((tempval % 16) < 10)
printout[i + 1] = (tempval % 16) + 48;
else
printout[i + 1] = (tempval % 16) + asc;
tempval = tempval / 16;
}
i = ft_strlen(printout);
i = i + print_string("0x");
ft_putstr_fd(printout, 1);
free(printout);
if (value == 0)
i += print_char('0');
return (i);
}

*/
