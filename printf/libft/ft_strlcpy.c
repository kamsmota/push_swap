/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:28:12 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:28:12 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sizesrc;

	i = 0;
	sizesrc = ft_strlen((char *)src);
	while (size > i + 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = 0;
	return (sizesrc);
}
