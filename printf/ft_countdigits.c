/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:48:25 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/15 19:06:44 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdigits(unsigned long n, unsigned long nbr)
{
	int	count;

	count = 1;
	while (n >= nbr)
	{
		n /= nbr;
		count++;
	}
	return (count);
}
