/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format_xxmu.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:38:39 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/10 21:05:55 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_upper_hexa(va_list argument, int *count)
{
	char			type;
	unsigned long	nbr;

	nbr = va_arg(argument, unsigned int);
	type = 'X';
	ft_puthexa_count(nbr, count, type);
}

void	handle_lower_hexa(va_list argument, int *count)
{
	char			type;
	unsigned long	nbr;

	nbr = va_arg(argument, unsigned int);
	type = 'x';
	ft_puthexa_count(nbr, count, type);
}

void	handle_modulo(int *count)
{
	ft_putchar_count('%', count);
}

void	handle_unsigned(va_list argument, int *count)
{
	unsigned int	nbr;

	nbr = va_arg(argument, unsigned long);
	ft_putunsigned_count(nbr, count);
}
