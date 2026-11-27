#include "push_swap.h"
#include <stdio.h>

void	ft_printa(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	int	i;
	int	*a;
	int	*b;
	int	flag;

	if (argc < 2)
		return (0);
	a = NULL;
	i = 1;
	flag = ft_flag(argv[i]);
	if (argc == 2 && flag)
		return (ft_error());
	if (flag != 0)
		i++;
	if (ft_strcmp(argv[i], "--bench") == 0)
	{
		i++;
		flag += 5;
	}
	a = ft_create_array(argv + i);
	if (!a)
		return (ft_error());
	b = malloc(sizeof(int) * argc - i);
	if (!b)
		return(ft_error);
	free(a);
	return (0);
}

//if flag > 4 then there is bench
