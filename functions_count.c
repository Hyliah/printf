/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:06:32 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/11 14:57:03 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_count(char c, int *count)
{
	if (write(1, &c, 1) == -1)
		*count = -1;
	else
		(*count)++;
}

void	ft_putstr_count(char *s, int *count)
{
	while (*s)
	{
		ft_putchar_count(*s, count);
		s++;
	}
}

void	ft_putnbr_count(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr_count("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_count('-', count);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_count(n / 10, count);
	ft_putchar_count((n % 10) + '0', count);
}

void	ft_putunsigned_count(unsigned int n, int *count)
{
	int		i;
	char	str[21];

	i = 0;
	if (n == 0)
	{
		ft_putchar_count('0', count);
		return ;
	}
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar_count(str[i--], count);
}

void	ft_puthexa_count(unsigned long n, int *count, char type)
{
	int		i;
	char	str[21];
	char	*base;

	if (type == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		ft_putchar_count('0', count);
		return ;
	}
	while (n != 0)
	{
		str[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	i--;
	while (i >= 0)
		ft_putchar_count(str[i--], count);
}
