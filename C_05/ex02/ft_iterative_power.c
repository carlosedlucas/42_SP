int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	i = 0;
	number = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		number = number * nb;
		i++;
	}
	return (number);
}
