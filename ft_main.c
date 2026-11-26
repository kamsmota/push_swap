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
	int	flag;

	a = NULL;
	i = 0;
	flag = ft_flag(argv[i]);
	if (flag != 0)
		i++;
	a = ft_create_array(argv + i);
	if (!a)
		write (1, "Error\n", 6);
	return (flag + argc);
}
//something is wrong here and in the create array
