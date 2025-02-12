/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:58:17 by yael-you          #+#    #+#             */
/*   Updated: 2025/02/06 02:16:20 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(va_list args, int *count)
{
	char	*base;
	void	*ptr;

	base = "0123456789abcdef";
	ptr = va_arg(args, void *);
	if (!ptr)
		ft_putstr("(nil)", count);
	else
	{
		ft_putstr("0x", count);
		ft_putnbr_base((unsigned long)ptr, base, count);
	}
}
