/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:54:53 by rafael            #+#    #+#             */
/*   Updated: 2024/11/21 16:35:59 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchars(int c);
void	ft_putnbr(int n);
int		ft_putstrs(char *str);
int		ft_strlen(char *str);
int		ft_print_integer(int i);
int		ft_print_pointer(void *ptr);
int		ft_print_unsigned(unsigned int n);
int		ft_int_len(int n);
int		ft_print_hex_maj(unsigned int n);
int		ft_print_hex_min(unsigned int n);

#endif
