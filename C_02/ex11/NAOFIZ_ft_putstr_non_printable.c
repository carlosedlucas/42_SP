#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

void	print_in_hex(unsigned char c);
void	print_singe_hex(unsigned char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
		{
			write(1, "\\", 1);
			print_in_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return ;
}

void	print_in_hex(unsigned char c)
{
	print_singe_hex(c / 16);
	print_singe_hex(c % 16);
}

void	print_singe_hex(unsigned char c)
{
	char	hex;

	if (c > 9)
		hex = 'W' + c;
	else
		hex = '0' + c;
	write(1, &hex, 1);
}


int main(void)
{
	char str[] = "Oi\nvoce esta bem?";

	printf("Expected:\nOi\\0avoce esta bem?\n");
	printf("Output:\n");
	ft_putstr_non_printable(str);
}
