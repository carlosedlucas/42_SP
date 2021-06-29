#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	change;
	int	maxIndex;
	int	minIndex;

	maxIndex = size - 1;
	minIndex = 0;
	while (maxIndex != minIndex)
	{
		change = tab[minIndex];
		tab[minIndex] = tab[maxIndex];
		tab[maxIndex] = change;
		maxIndex--;
		minIndex++;
	}
}
