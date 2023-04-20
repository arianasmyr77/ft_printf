/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:48:35 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 14:56:12 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_converter(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_putptr(va_arg(args, unsigned long)));
	}	
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'x')
		return (ft_puthex_lower(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_puthex_upper(va_arg(args, unsigned int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(args, unsigned int)));
	else if (c == '%')
		return (write(1, "%%", 1));
	return (0);
}
