/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafael <rafael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:58:22 by rafael            #+#    #+#             */
/*   Updated: 2024/11/20 16:13:21 by rafael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(const char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (*str)
		write(1, str++, 1);
}