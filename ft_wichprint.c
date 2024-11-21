/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wichprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:53:10 by rafael            #+#    #+#             */
/*   Updated: 2024/11/20 16:30:22 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	ft_putstr(str);
	if (!str)
		return (6);
	return (ft_strlen(str));
}

int	ft_print_integer(va_list args)
{
	int	n;
	int	len;

	n = va_arg(args, int);
	ft_putnbr(n);
	if (n < 0)
		len = ft_strlen("-2147483648");
	else
		len = ft_strlen("0");
	return (len);
}

int	ft_print_char(va_list args)
{
	char	ch;

	ch = (char)va_arg(args, int);
	ft_putchar(ch);
	return (1);
}

int	ft_wichprint(char c, va_list args)
{
	if (c == 's')
		return (ft_print_string(args));
	else if (c == 'd')
		return (ft_print_integer(args));
	else if (c == 'c')
		return (ft_print_char(args));
	else if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	return (0);
}
