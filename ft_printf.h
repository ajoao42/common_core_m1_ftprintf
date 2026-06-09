/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoao <ajoao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 18:44:59 by ajoao             #+#    #+#             */
/*   Updated: 2026/06/09 20:53:17 by ajoao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_chr(char c);
int	ft_print_str(char *str);
int	ft_print_hex(unsigned int i, char c);
int	ft_print_undec(unsigned int nbr);
int	ft_print_int(int nbr);
int	ft_print_ptr(void *ptr);

#endif