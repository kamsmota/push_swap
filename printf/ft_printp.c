/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:37:28 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/17 13:37:28 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(void *pt)
{
	unsigned long	n;

	if (!pt)
	{
		write (1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	n = (unsigned long)pt;
	return (ft_conversion(n, 16, "0123456789abcdef") + 2);
}

/* int	main()
{
	int	i = 1;
	ft_printp(&i);
} */
