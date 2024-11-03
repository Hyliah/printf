/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:48:32 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 20:58:00 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

int ft_putnbr_return(int n);
int	ft_putstr_return(char *s);
int	handle_char(va_list argument);
int	handle_sting(va_list argument);
int	handle_pointer(va_list argument);
int	handle_integer(va_list argument);
int	ft_printf(const char *format, ...);

#endif