#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	letters;

	letters = 'a';
	while (letters <= 'z')
	{
		write(1, &letters, 1);
		letters++;
	}
}
