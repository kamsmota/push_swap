/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:27:36 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:27:36 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

static int	ft_howmany(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (s[i] && s[i] != c)
		count = 1;
	else
		count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			count++;
		i++;
	}
	return (count);
}

static int	ft_whenstop(char const *s, char c, int nb, char **str)
{
	int	i;

	i = 0;
	while (s[nb] == c && s[nb])
		nb++;
	while (s[nb] != c && s[nb])
	{
		nb++;
		i++;
	}
	*str = ft_substr(s, nb - i, i);
	return (nb);
}

static char	**ft_free(char **str, int i)
{
	while (--i >= 0)
		free (str[i]);
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	int		nb;
	char	**str;

	if (!s)
		return (NULL);
	len = ft_howmany(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	i = 0;
	nb = 0;
	if (!str)
		return (NULL);
	while (i < len)
	{
		nb = ft_whenstop(s, c, nb, &str[i]);
		if (!str[i])
		{
			str = ft_free(str, i);
			return (NULL);
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}

/*int	main()
{
	char	**str = ft_split("ollaaaalal", 'l');

	printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
}*/
