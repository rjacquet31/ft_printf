/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:16:24 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 15:26:15 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_wichprint(char c, va_list args)
{
	if (c == 's')
		return (ft_putstrs(va_arg(args, char *)));
	else if (c == 'd')
		return (ft_print_integer(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchars(va_arg(args, int)));
	else if (c == '%')
	{
		ft_putchars('%');
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			len += ft_wichprint(str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchars(str[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
