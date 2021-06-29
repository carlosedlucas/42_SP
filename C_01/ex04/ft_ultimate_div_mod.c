#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	change;

	change = *a / *b;
	*b = *a % *b;
	*a = change;
}
