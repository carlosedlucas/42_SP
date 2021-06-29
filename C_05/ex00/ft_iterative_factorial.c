int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 1)
	{
		i *= nb;
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (i);
}

