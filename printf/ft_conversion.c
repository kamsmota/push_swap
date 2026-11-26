/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:37:04 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/17 13:37:04 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(unsigned long nbr, unsigned long i, const char *str)
{
	int		mod;
	char	c;

	if (nbr / i > 0)
		ft_conversion(nbr / i, i, str);
	mod = nbr % i;
	c = str[mod];
	write(1, &c, 1);
	return (ft_countdigits(nbr, i));
}

// int	main()
// {
// 	ft_conversion(1005, 0, "0123456789abcdef");
// 	put_char('\n');
// 	ft_conversion(1005, 1, "0123456789abcdef");
// }
