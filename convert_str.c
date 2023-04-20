/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:03:52 by arforouz          #+#    #+#             */
/*   Updated: 2022/12/05 15:22:32 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}
/*
int	main()
{
	char str[] = "Amasia";
	int size = ft_printstr(str);
	ft_printf("\n%d", size);
}*/
