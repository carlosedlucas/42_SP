#include <unistd.h>

void	ft_is_negative(int	n)
{
	char	signal;

	if (n < 0)
	{
		signal = 'N';
		write(1, &signal, 1);
	}
	else
	{
		signal = 'P';
		write(1, &signal, 1);
	}
}
