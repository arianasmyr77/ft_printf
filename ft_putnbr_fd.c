/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:59 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 15:30:24 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	nbr;

	nbr = 0;
	if (n >= -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			nbr += ft_putchar('-');
			nbr += ft_putchar('2');
			nbr += ft_putnbr(147483648);
		}
		else if (n < 0)
		{
			nbr += ft_putchar('-');
			nbr += ft_putnbr(-n);
		}
		else if (n > 9)
		{
			nbr += ft_putnbr((n / 10));
			nbr += ft_putnbr((n % 10));
		}
		else
			nbr += ft_putchar((n + '0'));
	}
	return (nbr);
}
/*
int main()
{
	//int i = -2147483648;
	int count=ft_putnbr(i);
	printf("\nsize =  %d ", count);
	return 0;
}*/