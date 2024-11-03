/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format_cspdi.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:32:52 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 21:00:49 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_char(va_list argument)
{
	char c;
	c = va_arg(argument, char);
	return (write(1, &c, 1));
}

int	handle_sting(va_list argument)
{
	char *str;

	str = va_arg(argument, char *);
	if (str)
		return (ft_putstr_return(str));
	return (ft_putstr_return("(NULL)"));
}

int	handle_pointer(va_list argument)
{
	
}

int	handle_integer(va_list argument)
{
	int nbr;

	nbr = va_arg(argument, int);
	return (ft_putnbr_return (nbr));
}

void	ft_putnbr_16(int n, int fd) //refaire en iteratif voir putnbr_return
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