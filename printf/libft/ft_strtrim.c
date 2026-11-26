/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:28:55 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:28:55 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_samebegin(char const *s1, char const *set)
{
	int	start;
	int	i_set;

	i_set = 0;
	start = 0;
	while (set[i_set])
	{
		if (set[i_set] == s1[start])
		{
			i_set = 0;
			start++;
		}
		else
			i_set++;
	}
	return (start);
}

static	int	ft_sameend(char const *s1, char const *set)
{
	int	len;
	int	i_set;

	len = ft_strlen((char *)s1) - 1;
	i_set = 0;
	while (len >= 0 && set[i_set])
	{
		if (set[i_set] == s1[len])
		{
			i_set = 0;
			len--;
		}
		else
			i_set++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = ft_samebegin(s1, set);
	end = ft_sameend(s1, set);
	if (end - start < 0)
		str = malloc(1);
	else
		str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
