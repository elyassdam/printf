#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

// Función principal
int		ft_printf(const char *format, ...);

// Funciones auxiliares
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr_base(int n, char *base, int *count);
void	ft_ptr(va_list arg, int *count);
int	ft_converter(char format, va_list args, int *count);

#endif
