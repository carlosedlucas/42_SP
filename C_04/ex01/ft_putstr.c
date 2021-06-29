#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter_array;

	counter_array = 0;
	while (str[counter_array] != '\0')
	{
		write(1, &str[counter_array], 1);
		counter_array++;
	}
}
