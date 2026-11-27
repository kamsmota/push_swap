/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmota <kmota@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 17:45:07 by mafvicen          #+#    #+#             */
/*   Updated: 2026/11/27 20:16:23 by kmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//i = nbr of the a array
//n = nbr to add
int	*ft_arrayjoin(int *a, int n, int i)
{
	int	*arr;
	int	count;

	if (!a)
	{
		a = malloc(sizeof(int));
		if (!a)
			return (NULL);
	}
	count = 0;
	arr = malloc(sizeof(int) * (i + 1));
	if (!arr)
	{
		free(a);
		return (NULL);
	}
	while (count < i)
	{
		arr[count] = a[count];
		count++;
	}
	arr[i] = n;
	free(a);
	return (arr);
}

int	*ft_create_array(char **argv)
{
	int	i;
	int	*a;

	a = NULL;
	i = 0;
	while (argv[i])
	{
		if (ft_isvalidnum(argv[i]))
		{
			free(a);
			return (NULL);
		}
		a = ft_arrayjoin(a, ft_stonum(argv[i]), i);
		i++;
		ft_printa(a, i);
	}
	return (a);
}

// criar ft_verify_array:
// ver quantos argc existem
// chegar ate o fim do argv[argc - 1]
// verificar de dois em dois se ha numeros iguais
// se houver, retorna 1 (erro)
// continuar ate chegar em argv[1] ou argv[2] (depende da flag)
// dps disso, criar o array em si (ou validar ele)

//main deve ter a quantidade de numeros e o ponteiro (para o disorder) e p operacoes futuras


/*#include <stdio.h>

int	main()
{
	int	*a;

	a = NULL;
	a = ft_arrayjoin(a, 0, 0);
	printf("%d\n", a[0]);
	a = ft_arrayjoin(a, 1, 1);
	printf("%d %d\n", a[0], a[1]);
	a = ft_arrayjoin(a, 2, 2);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	a = ft_arrayjoin(a, 3, 3);
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
	a = ft_arrayjoin(a,4, 4);
	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
	free(a);
}*/
