/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:24:49 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:24:49 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	mem = malloc(size * num);
	if (!mem)
		return (NULL);
	ft_bzero (mem, num * size);
	return (mem);
}

//it has to be num * size to allocate the needed bytes
