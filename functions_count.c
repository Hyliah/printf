/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:06:32 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/07 21:07:16 by hlichten         ###   ########.fr       */
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
	while(*s)
	{
		ft_putchar_count(*s, count);
		s++;
	}
}

void	ft_putnbr_count(int n, int *count)
{
	int		i;
	char	str[12];

	i = 0;
	if (n == -2147483648)
		ft_putstr_count("-2147483648", count);
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	while (n >= 0) 
	{
		str[i++] = n % 10;
		n = n / 10;
	}
	while (i >= 0)
		ft_putchar_count(str[i--], count);
}

void	ft_putunsigned_count(unsigned long n, int *count)
{
	int		i;
	char	str[20];

	i = 0;
	while (n != 0) 
	{
		str[i++] = n % 10;
		n = n / 10;
	}
	while (i >= 0)
		ft_putchar_count(str[i--], count);
}

void	ft_puthexa_count(unsigned int n, int *count, char type)
{
	int		i;
	char	str[17];
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
	while (i >= 0)
		ft_putchar_count(str[i--], count);
}