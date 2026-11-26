/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:28:08 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:28:08 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sizedest;
	size_t	sizesrc;
	size_t	i;

	i = 0;
	sizedest = ft_strlen(dst);
	sizesrc = ft_strlen((char *)src);
	if (sizedest >= size)
		return (size + sizesrc);
	while (i + sizedest + 1 < size && i < sizesrc)
	{
		dst[sizedest + i] = src[i];
		i++;
	}
	dst[sizedest + i] = 0;
	return (sizedest + sizesrc);
}
