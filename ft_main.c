#include "push_swap.h"
#include <stdio.h>

/*void	ft_printa(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}*/

int	main(int argc, char **argv)
{
	int	i;
	int	*a;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		a = ft_arrayjoin(a, atoi(&(*argv[i])), i - 1);
		i++;
		ft_printa(a, i - 1);
	}
}
