#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}


int ft_str_is_uppercase(char *str);

int main(void)
{
	if (
		ft_str_is_uppercase("") == 1
		&& ft_str_is_uppercase("ABCDEF") == 1
		&& ft_str_is_uppercase("abcdEF") == 0
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}