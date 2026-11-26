#include "push_swap.h"

int	ft_flag(char *str)
{
	if (ft_strcmp(str, "--simple") == 0)
		return (1);
	else if(ft_strcmp(str, "--medium") == 0)
		return (2);
	else if(ft_strcmp(str, "--complex") == 0)
		return (3);
	else if(ft_strcmp(str, "--adaptative") == 0)
		return (4);
	return (0);
}
