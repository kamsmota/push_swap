/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:25:42 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:25:42 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>

static int	ft_power(int i)
{
	int	count;
	int	num;

	num = 1;
	count = 0;
	while (count < i)
	{
		num *= 10;
		count++;
	}
	return (num);
}

static int	ft_mem(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		count ++;
		n /= 10;
	}
	return (count);
}

static char	*ft_puttog(char *str, int count, int n)
{
	int		i;
	long	nb;
	long	nb1;

	i = 0;
	nb1 = n;
	if (n < 0)
	{
		str[i++] = '-';
		nb1 *= -1;
		count--;
	}
	while (count >= 0)
	{
		nb = nb1;
		nb /= ft_power(count);
		str[i++] = nb % 10 + '0';
		count--;
	}
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;

	count = ft_mem(n);
	str = malloc (sizeof(char) * (count + 2));
	if (!str)
		return (NULL);
	str = ft_puttog(str, count, n);
	return (str);
}

// int	main()
// {
// 	printf("%s\n", ft_itoa(98348900));
// }
