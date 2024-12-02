/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_maj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:34:14 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 16:34:41 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex_maj(unsigned int n)
{
	if (n >= 16)
		ft_put_hex_maj(n / 16);
	ft_putchars("0123456789ABCDEF"[n % 16]);
}

int	ft_print_hex_maj(unsigned int n)
{
	unsigned int	temp;
	int				len;

	if (n == 0)
	{
		ft_putchars('0');
		return (1);
	}
	ft_put_hex_maj(n);
	len = 0;
	temp = n;
	while (temp)
	{
		len++;
		temp /= 16;
	}
	return (len);
}
