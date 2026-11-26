/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:26:46 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:26:46 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//finds the first element of the array

void	*ft_memchr(const void *str, int value, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)str)[i] == (unsigned char)value)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

//(unsigned char)value is for putting only the last 8 binary digits
