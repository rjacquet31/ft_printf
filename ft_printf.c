/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:16:24 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 16:22:35 by rafael           ###   ########.fr       */
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
	else if (c == 'p')
		return (ft_print_pointer(va_arg(args, char *)));
	else if (c == 'i')
		return (ft_print_integer(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
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
