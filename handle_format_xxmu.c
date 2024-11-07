/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_format_xxmu.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:38:39 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/07 20:57:47 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handle_X(va_list argument, int *count)
{
    char    type;
    unsigned long	nbr;

	nbr = va_arg(argument, unsigned int);
    type = 'X';
    ft_puthexa_count(nbr, count, type);
}

void	handle_x(va_list argument, int *count)
{
    char    type;
    unsigned long	nbr;

	nbr = va_arg(argument, unsigned int);
    type = 'x';
    ft_puthexa_count(nbr, count, type);
}

void	handle_modulo(va_list argument, int *count)
{
	ft_putchar_count('%', count);
}

void	handle_unsigned(va_list argument, int *count)
{
    unsigned long	nbr;

	nbr = va_arg(argument, unsigned long);
    ft_putunsigned_count(nbr, count);
}