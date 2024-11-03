/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_return.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:06:32 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 20:58:03 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_return(char *s)
{
	return (write(1, s, ft_strlen(s)));
}

int ft_putnbr_return(int n)
{
	char c;

	if (n == -2147483648)
		return (ft_putstr_return("-2147483648"));
	else if (n >= 9 && n >= 0)
	{
		c = n - 48;
		return (write(1, &c, 1));
	}
	else if (n < 0)
	{
		
	}
	else 
	{

	}
}
