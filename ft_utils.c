#include "push_swap.h"

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	signal;

	i = 0;
	num = 0;
	signal = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = -signal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num * signal);
}

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] <= '0' && str[i] >= '9')
		return (1);
	return (0);
}

int	ft_strcmp(char *str, char *cmp)
{
	int	i;

	i = 0;
	while (str[i] == cmp[i] && str[i])
		i++;
	return (str[i]);
}
