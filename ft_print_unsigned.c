/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:13:51 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 16:21:17 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsigned(unsigned int n)
{
	if (n >= 10)
		ft_put_unsigned(n / 10);
	ft_putchars((n % 10) + '0');
}

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	ft_put_unsigned(n);
	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
