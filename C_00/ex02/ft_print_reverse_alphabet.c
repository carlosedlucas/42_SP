#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letters;

	letters = 'z';
	while (letters >= 'a')
	{
		write(1, &letters, 1);
		letters--;
	}
}
