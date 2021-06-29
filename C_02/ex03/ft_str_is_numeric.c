#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_str_is_numeric(char *str);

int main(void)
{
	char str[] = "12345";
	char str2[] = "11243a";

	if (ft_str_is_numeric(str) == 1 && ft_str_is_numeric(str2) == 0)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}
