/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:28:50 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:28:50 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//last occurence of a carachterr
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);
	while (i > 0 && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}

	//return non constant
