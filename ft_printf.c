/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:16:32 by yael-you          #+#    #+#             */
/*   Updated: 2025/02/04 02:22:44 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_converter(char format, va_list args)
{
    if (format == 'c')
        ft_putchar()
    else if (format == 's')
        ft_putstr(format,va_list args);
    else if (format == 'p')
        ftptr()
    else if (format == 'd')
        ft_putnbr(va_arg(args,int));
    else if (format == 'u')
    else if (format == 'x')
    else if (format == 'X')
    else if (format == '%')
        return ft_putchar(va_arg(format, int));
}
int ft_printf(char const *format, ...)
{
    va_list args;
    va_start(args, format);
    
    while (format)
    {
        if (*format == '%')
        format ++;
    }
    va_end(args);
    return (ft_strlen(format));
}
