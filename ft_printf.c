/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:19 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 17:12:42 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_converter(args, *str);
		}
		else
		{
			write(1, str, 1);
			len++;
		}
		str++;
	}
	va_end(args);
	return (len);
}
/*
int	main()
{
	char str[] = "0123456789";
	int	i;
	int count;
	unsigned long h = 320;

	i = 42;
	count = ft_printf("%s%d%x%%\n", str, i, h);
	ft_printf("%d", count);
	//printf("%d", count);
	return (0);
}*/