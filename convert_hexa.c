/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:36:11 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 16:27:36 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	static int		count;

	count = 0;
	if (n >= 16)
	{
		ft_puthex_lower(n / 16);
		ft_putchar("0123456789abcdef"[n % 16]);
		count++;
	}
	else
	{
		ft_putchar("0123456789abcdef"[n % 16]);
		count++;
	}
	return (count);
}

int	ft_puthex_upper(unsigned int n)
{
	static int		count;

	count = 0;
	if (n >= 16)
	{
		ft_puthex_upper(n / 16);
		ft_putchar("0123456789ABCDEF"[n % 16]);
		count++;
	}
	else
	{
		ft_putchar("0123456789ABCDEF"[n % 16]);
		count++;
	}
	return (count);
}
/*
int main()
{
	unsigned long i = 3250;
	int count = ft_puthex_lower(i);
	printf("\n%d", count);
	return (0);
}
*/