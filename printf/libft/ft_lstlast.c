/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafvicen <mafvicen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:26:18 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/04 12:26:18 by mafvicen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main()
// {
// 	t_list	*head = NULL;

// 	ft_lstadd_front(&head, ft_lstnew("C"));
// 	ft_lstadd_front(&head, ft_lstnew("B"));
// 	ft_lstadd_front(&head, ft_lstnew("A"));
// 	printf("%s\n", (char *)ft_lstlast(head)->content);
// 	printf("%p\n", (void *)ft_lstlast(NULL));
// }
