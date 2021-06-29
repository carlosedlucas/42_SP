#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	print_comb (int num1, int num2)
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

void ft_print_combn(int n)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 89)
	{
		print_comb(a, b);
		a++;
	}
}

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int n;

	n = 2;
	while(n <= 5)
	{
		printf("n = %d:\n", n);
		ft_print_combn(n++);
		write(1, "\n", 1);
	}
	n = 9;
	printf("n = %d:\n", n);
	ft_print_combn(n++);
	write(1, "\n", 1);
	return (0);
}