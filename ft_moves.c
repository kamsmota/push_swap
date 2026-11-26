/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 09:49:40 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/25 17:42:21 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(int *a1, int *a2)
{
	int	temp;

	if (*a1 < *a2)
		return (0);
	temp = *a2;
	*a2 = *a1;
	*a1 = temp;
	return (1);
}

int	ft_push(int *a1, int *b1)
{
	int	temp;

	if (!*b1)
		return (0);
	temp = *a1;
	*a1 = *b1;
	*b1 = temp;
	return (1);
}

int	ft_rotate(int *a, int n)
{
	int	temp;
	int	i;

	i = 0;
	temp = a[0];
	while (i < n - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
	return (1);
}

int	ft_reverse_rotate(int *a, int n)
{
	int	temp;
	int	i;

	i = n - 1;
	temp = a[n - 1];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = temp;
	return (1);
}

/* #include <stdio.h>

int	main()
{
	int	a1 = 2;
	int	a2 = 0;;
	int	a[3] = {1, 2, 3};
	int	i;

	printf("%d %d\n", a1, a2);
	i = ft_swap(&a1, &a2);
	printf("%d %d\n", a1, a2);
	i = ft_push(&a1, &a2);
	printf("%d %d\n", a1, a2);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	i = ft_rotate(a, 3);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	i = ft_reverse_rotate(a, 3);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	return (i);
} */
