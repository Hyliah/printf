/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format_cspdi.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:32:52 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 23:31:00 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_char(va_list argument, int *count)
{
	char	c;

	c = va_arg(argument, int);
	ft_putchar_count(c, count);
}

void	handle_string(va_list argument, int *count)
{
	char	*str;

	str = va_arg(argument, char *);
	if (str)
		ft_putstr_count(str, count);
}

void	handle_pointer(va_list argument, int *count)
{
	
}

void	handle_integer(va_list argument, int *count)
{
	int	nbr;

	nbr = va_arg(argument, int);
	ft_putnbr_count(nbr, count);
}
