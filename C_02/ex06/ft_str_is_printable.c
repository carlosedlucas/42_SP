#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int ft_str_is_printable(char *str);

int main(void)
{
	char str1[4];
	char str2[3];

	str1[0] = '\x01';
	str1[1] = '!';
	str1[2] = '/';
	str1[3] = 'b';

	str2[0] = '\x7f';
	str2[1] = 'a';
	str2[2] = '.';

	if (
		ft_str_is_printable(str1) == 0
		&& ft_str_is_printable(str2) == 0
		&& ft_str_is_printable("abcd178,.;:^~") == 1
		&& ft_str_is_printable("") == 1
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}