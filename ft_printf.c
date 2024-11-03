/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:22:38 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 21:00:49 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int i;
	int count;
	va_list	argument;
	va_start(argument, format);

	while (format[i])
	{
		while (format[i] != "%")
		{
			ft_putchar_fd(format[i], 1);
			i++;
		}
		if (format[i] == "c")
		{
			ft_putchar_fd(format[i], 1);
			i++;
		}
	}

		va_end(argument);
	return (count);
}