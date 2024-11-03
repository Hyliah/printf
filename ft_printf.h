/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:48:32 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/03 23:20:30 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int     ft_printf(const char *format, ...);
void	ft_putchar_count(char c, int *count);
void	ft_putstr_count(char *s, int *count);
void	ft_putnbr_count(int n, int *count);
void    handle_char(va_list argument, int *count);
void	handle_string(va_list argument, int *count);
void	handle_pointer(va_list argument, int *count);
void	handle_integer(va_list argument, int *count);




#endif