/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yael-you <yael-you@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:31:12 by yael-you          #+#    #+#             */
/*   Updated: 2025/02/04 17:30:26 by yael-you         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putnbr_base(int n, char *base)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 16)
		ft_putnbr_base(n / 16, base);
	ft_putchar(*(base + (n % 16)));
}
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int main ()
{
	ft_putnbr_base(255,"0123456789abcdef");
}