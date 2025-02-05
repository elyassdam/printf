/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:16:32 by yael-you          #+#    #+#             */
/*   Updated: 2025/02/05 17:02:08 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_converter(char format, va_list args, int *count)
{
	if (format == 'c')
		ft_putchar((char)va_arg(args, int), count);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format == 'p')
		ft_ptr(args, count);
	else if (format == 'd')
		ft_putnbr_base(va_arg(args, int), "0123456789", count);
	else if (format == 'u')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789", count);
	else if (format == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", count);
	else if (format == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", count);
	else if (format == '%')
		ft_putchar('%', count);
	return (0);
}
int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		c;

	c = 0;
	va_start(args, format);
	if (*format == '\0')
		ft_putchar(' ', &c);
	while (format)
	{
		if (*format == '%')
		{
			format++;
			ft_converter(*format, args, &c);
		}
		else
			ft_putchar(*format, &c);
		format++;
	}
	va_end(args);
	return (c);
}
void	ft_ptr(va_list args, int *count)
{
	char	*base;
	void	*ptr;

	base = "0123456789abcdef";
	ptr = va_arg(args, void *);
	if (ptr == NULL)
		ft_putstr("(nil)", count);
	else
	{
		ft_putstr("0x", count);
		ft_putnbr_base(va_arg(args, int),base, count);
	}
}
/* int	main(void)
{
	ft_printf("Hello %s","eeeee");
	return (0);
} */