/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_choice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 14:20:18 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/17 13:35:35 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choice(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_printc(va_arg(*ap, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(*ap, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_printnbr(va_arg(*ap, unsigned int)));
	else if (c == '%')
		return (ft_printc('%'));
	else if (c == 'x')
		return (ft_conversion(va_arg(*ap, unsigned int), 16,
				"0123456789abcdef"));
	else if (c == 'X')
		return (ft_conversion(va_arg(*ap, unsigned int), 16,
				"0123456789ABCDEF"));
	else if (c == 'p')
		return (ft_printp((va_arg(*ap, void *))));
	write (1, "%", 1);
	write (1, &c, 1);
	return (2);
}
