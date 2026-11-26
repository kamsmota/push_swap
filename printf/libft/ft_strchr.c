/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:27:43 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:27:43 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//finds a character in a string
char	*ft_strchr(char *str, int character)
{
	int				i;
	unsigned char	c;

	i = 0;
	c = (unsigned char)character;
	while (str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	if (str[i] == c)
		return (str + i);
	return (NULL);
}
