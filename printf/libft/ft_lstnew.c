/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:26:29 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:26:29 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*a = ft_lstnew("hello");
// 	t_list	*b = ft_lstnew("world");

// 	a->next = b;
// 	printf("%s -> %s\n", (char *)a->content, (char *)a->next->content);
// 	free(a);
// 	free(b);
// 	return (0);
// }
