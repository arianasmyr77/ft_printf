/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:01:29 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 14:51:52 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_puthex_lower(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putptr(unsigned long n);
int	ft_printstr(char *str);
int	ft_converter(va_list args, char c);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);

#endif