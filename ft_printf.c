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

static int	ft_check_type(const char *type, va_list va_lst)
{
	int	i;

	i = 0;
	if (*type == 'c')
		i += (ft_print_chr(va_arg(va_lst, int)));
	else if (*type == 's')
		i += (ft_print_str(va_arg(va_lst, char *)));
	else if (*type == 'x' || *type == 'X')
		i += (ft_print_hex(va_arg(va_lst, unsigned int), *type));
	else if (*type == 'i' || *type == 'd')
		i += (ft_print_int(va_arg(va_lst, int)));
	else if (*type == 'u')
		i += (ft_print_undec(va_arg(va_lst, unsigned int)));
	else if (*type == '%')
		i += (ft_print_chr('%'));
	return (i);
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
			if (ft_strchr("cspdiuxX", *format))
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
