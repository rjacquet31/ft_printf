/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:45:55 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 21:38:54 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex(unsigned long n)
{
	if (n >= 16)
		ft_put_hex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	addr;
	int				len;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long)ptr;
	write(1, "0x", 2);
	ft_put_hex(addr);
	len = 2;
	while (addr)
	{
		len++;
		addr /= 16;
	}
	return (len);
}
