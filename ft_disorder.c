/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disorder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 15:23:08 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/25 16:15:57 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	ft_disorder(int *a, int n)
{
	int		count;
	int		disorder;
	int		i;
	int		j;

	i = 0;
	count = 0;
	disorder = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (a[i] > a[j])
				disorder++;
			count++;
			j++;
		}
		i++;
	}
	return ((double)disorder / (double)count);
}
