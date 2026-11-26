/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:37:20 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/17 13:37:22 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(long i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		count++;
		i *= -1;
		write (1, "-", 1);
	}
	return (count + ft_conversion(i, 10, "0123456789"));
}

/* int main()
{
	printf("%d", ft_printnbr(-30));
} */
