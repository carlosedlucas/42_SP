#include	<unistd.h>

void	ft_putchar(int hundred, int ten, int units)
{
	if (hundred < ten && ten < units)
	{
		write(1, &hundred, 1);
		write(1, &ten, 1);
		write(1, &units, 1);
		if (hundred != '7' || ten != '8' || units != '9')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = '0';
		while (j <= '8')
		{
			k = '0';
			while (k <= '9')
			{
				ft_putchar(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
