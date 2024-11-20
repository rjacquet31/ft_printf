/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:54:53 by rafael            #+#    #+#             */
/*   Updated: 2024/11/20 16:21:40 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(const char *str);
int		ft_strlen(const char *str);
int	ft_wichprint(char c, va_list args);

#endif
