/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:16:32 by yael-you          #+#    #+#             */
/*   Updated: 2025/02/04 14:16:34 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_converter(char format, va_list args)
{
    if (format == 'c')
        ft_putchar(va_arg(args,char));
    else if (format == 's')
        ft_putstr(va_arg(args,char *));
    else if (format == 'p')
        ftptr(va_arg(args,int));
    else if (format == 'd')
        ft_putnbr(va_arg(args,int));
    else if (format == 'u')
        ft_unsigned(va_arg(args,unsigned int));
    else if (format == 'x')
        ft_hexa_base16_toupper(va_arg(args,int ));
    else if (format == 'X')
        ft_hexa_base10_tolower(va_arg(args,int));
    else if (format == '%')
        return ft_putchar(va_arg(args, char));
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
}int ft_ptr()
{
    int i;
    int  *ptr;

    ptr = &i;
    ft_putchar(&i);
    
}