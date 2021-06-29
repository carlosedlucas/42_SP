#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int ft_str_is_alpha(char *str);

int main(void)
{
	// char str[] = "teste";
	// char str2[] = "ABXZ-";

	if (ft_str_is_alpha("") == 1 && ft_str_is_alpha("a1") == 0)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}