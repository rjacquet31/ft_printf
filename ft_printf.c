/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:16:24 by rafael            #+#    #+#             */
/*   Updated: 2024/11/19 14:27:41 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"
void *ft_wichprint(c, args)
{
	if (c = "s")
		ft_putstr_fd(args, 1);

}
int ft_printf(const char *str, ...)
{
	va_list    args;
	va_start( args, str);
	int i;
	int n;

	n = 0;
	i = 1;
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		else if (str[i] == '%')
		{
			ft_wichprint(str[i+1], va_arg[n]);
			n++;
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_printf("Hello %s\n", argv[1]);
	}
	return (0);
}
