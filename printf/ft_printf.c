/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 16:14:00 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/17 13:35:58 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* #include <stdio.h> */

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (!str)
		return (-1);
	va_start (args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			write (1, &str[i], 1);
			count++;
		}
		else if (str[i + 1])
			count += ft_choice(str[++i], &args);
		i++;
	}
	va_end(args);
	return (count);
}

/* int	main()
{
	int	count = ft_printf("Hello %d %s\n", 42, "How are you?");
	printf("%d", count);
} */
