/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format_cspdi.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:32:52 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/10 21:05:53 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_char(va_list argument, int *count)
{
	ft_putchar_count(va_arg(argument, int), count);
}

void	handle_string(va_list argument, int *count)
{
	char	*str;

	str = va_arg(argument, char *);
	if (str)
		ft_putstr_count(str, count);
	else
		ft_putstr_count("(null)", count);
}

void	handle_pointer(va_list argument, int *count)
{
	void	*nbr;

	nbr = va_arg(argument, void *);
	ft_putchar_count('0', count);
	ft_putchar_count('x', count);
	ft_puthexa_count((unsigned long)nbr, count, 'x');
}

void	handle_integer(va_list argument, int *count)
{
	int	nbr;

	nbr = va_arg(argument, int);
	ft_putnbr_count(nbr, count);
}
