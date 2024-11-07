/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:22:38 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 23:30:25 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_format(char c, va_list argument, int *count)
{
	if (c == 'p')
		handle_pointer(argument, count);
	if (c == 'x')
		handle_x(argument, count);
	if (c == 'X')
		handle_X(argument, count);
	if (c == '%')
		handle_modulo(argument, count);
	if (c == 'u')
		handle_u(argument, count);
	if (c == 'c')
		handle_char(argument, count);
	if (c == 's')
		handle_string(argument, count);
	if (c == 'd')
		handle_integer(argument, count);
	if (c == 'i')
		handle_integer(argument, count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	int		*count;
	va_list	argument;

	i = 0;
	j = 0;
	count = &j;
	va_start(argument, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_count(format[i], count);
		}
		else
		{
			i++;
			handle_format(format[i], argument, count);
		}
		i++;
	}
	va_end(argument);
	return (*count);
}

// #include <stdlib.h>
// #include <stdio.h>

// int	main (int ac, char **av)
// {
// 	(void)ac;
// 	ft_printf("#%c#", (av[1][0]));
// 	return (0);
// }