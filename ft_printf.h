/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:50:51 by yael-you          #+#    #+#             */
/*   Updated: 2025/02/06 13:04:41 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

// Función principal
int		ft_printf(const char *format, ...);

// Funciones auxiliares
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbru(unsigned int n, int *count);
void	ft_putnbr_base(unsigned long n, char *base, int *count);
void	ft_ptr(va_list args, int *count);
int		ft_converter(char format, va_list args, int *count);

#endif
