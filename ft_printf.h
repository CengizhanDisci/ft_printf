/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdisci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:28:51 by cdisci            #+#    #+#             */
/*   Updated: 2022/02/26 11:47:54 by cdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	kind(char a, va_list args);
int	ft_printf(const char *s, ...);
int	ft_print_str(char *str);
int	ft_strlen(const char *s);
int	hex_putnbr(unsigned int n, char *hex);
int	unsigned_putnbr(unsigned int n);
int	ft_printpointer(unsigned long int n);
int	putnbr(int n);
int	ft_putchar(char c);
int	pointer(unsigned long n, char *hex);
int	ft_putstr(char *str);

#endif
