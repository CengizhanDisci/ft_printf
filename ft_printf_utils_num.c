/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_num.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:44:05 by cdisci            #+#    #+#             */
/*   Updated: 2022/02/23 18:13:56 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		i += putnbr(n / 10);
		i += putnbr(n % 10);
	}
	else
	{
		i += ft_putchar(48 + n);
	}
	return (i);
}

int	ft_printpointer(unsigned long int n)
{
	int	print_number;

	print_number = 0;
	if (n >= 16)
		print_number += ft_printpointer(n / 16);
	print_number += ft_putchar("0123456789abcdef"[n % 16]);
	return (print_number);
}
