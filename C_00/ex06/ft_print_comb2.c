#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_comb(int num1, int num2)
{
	if (num1 < num2)
	{
		ft_putchar('0' + (num1 / 10));
		ft_putchar('0' + (num1 % 10));
		ft_putchar(' ');
		ft_putchar('0' + (num2 / 10));
		ft_putchar('0' + (num2 % 10));
		if (num1 != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			print_comb(a, b);
			b++;
		}
		a++;
	}
}
