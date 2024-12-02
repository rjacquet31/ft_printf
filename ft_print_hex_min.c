/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:33:53 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 16:35:35 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex_min(unsigned int n)
{
	if (n >= 16)
		ft_put_hex_min(n / 16);
	ft_putchars("0123456789abcdef"[n % 16]);
}

int	ft_print_hex_min(unsigned int n)
{
	unsigned int	temp;
	int				len;

	if (n == 0)
	{
		ft_putchars('0');
		return (1);
	}
	ft_put_hex_min(n);
	len = 0;
	temp = n;
	while (temp)
	{
		len++;
		temp /= 16;
	}
	return (len);
}
