#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}


int ft_str_is_lowercase(char *str);

int main(void)
{
	char str[] = "abcdfe";
	char str2[] = "abcfDE";

	if (ft_str_is_lowercase(str) == 1 && ft_str_is_lowercase(str2) == 0)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}