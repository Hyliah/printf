/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:22:38 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 16:37:56 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_16(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 16, fd);
		ft_putnbr_fd(n % 16, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
	else
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
}

int	ft_printf(const char *format, ...)
{
	int i;
	va_list	argument;
	va_start(argument, format);
	va_arg(argument, TYPE??);
	va_end(argument);

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
	//chercher dans format apres le %
	//et des 
}