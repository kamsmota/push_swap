/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:26:41 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:26:41 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		stop;

	if (!dest || !src)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	stop = (unsigned char)c;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i++] == stop)
			return (d + i);
	}
	return (NULL);
}

// line 26 converts int to char
