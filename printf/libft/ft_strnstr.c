/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:28:44 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:28:44 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//find the needle in the halstack until
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i_little;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		i_little = 0;
		while (little[i_little] && little[i_little] == big[i + i_little]
			&& (i + i_little) < len)
			i_little++;
		if (!little[i_little])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
