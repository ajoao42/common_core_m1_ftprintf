/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 17:03:47 by ajoao             #+#    #+#             */
/*   Updated: 2026/06/09 18:46:17 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_type(char type, va_list va_lst)
{
	if (type == 'c')
		return (ft_print_chr(va_arg(va_lst, int)));
	else if (type == 's')
		return (ft_print_str(va_arg(va_lst, char *)));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(va_lst, unsigned int), type));
	else if (type == 'i' || type == 'd')
		return (ft_print_int(va_arg(va_lst, int)));
	else if (type == 'u')
		return (ft_print_undec(va_arg(va_lst, unsigned int)));
	else if (type == '%')
		return (ft_print_chr('%'));
}

int	ft_printf(const char *format, ...)
{
	unsigned int	i;
	va_list			va_lst;

	i = 0;
	va_start(va_lst, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (ft_chr("cspdiuxX", *format))
				i += ft_check_type(format, va_arg(va_lst, void *));
			else if (*format == '%')
				i += ft_print_chr('%');
		}
		else
			i = i + ft_print_chr(*format);
		format++;
	}
	va_end(va_lst);
	return (i);
}
