/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:13:02 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 16:29:10 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	static int		i;

	i = 2;
	if (ptr >= 16)
	{
		ft_putptr(ptr / 16);
		ft_putchar("0123456789abcdef"[ptr % 16]);
		i++;
	}
	else
	{
		ft_putchar("0123456789abcdef"[ptr % 16]);
		i++;
	}
	return (i);
}

/*
int main()
{
	unsigned long i = 3205548788848458;
	int count = ft_putptr(i);
	printf("/n%d", count);
	return (0);
}*/
