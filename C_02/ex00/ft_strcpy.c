#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char a[5];
	char b[5];

	a[0] = 't';
	a[1] = 'e';
	a[2] = 's';
	a[3] = 't';
	a[4] = 'e';
	
	ft_strcpy(b, a);
	
	if (
		b[0] == 't' &&
		b[1] == 'e' &&
		b[2] == 's' &&
		b[3] == 't' &&
		b[4] == 'e'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}