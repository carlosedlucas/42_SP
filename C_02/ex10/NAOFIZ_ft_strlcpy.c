#include <stdio.h>


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
	{
		src_size++;
	}	
	if (size == 0)
	{
		return (src_size);
	}
	i = 0;
	while ((i < size - 1 ) && (i < src_size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[10];
	char src[] = "abcd";
	int size;

	size = ft_strlcpy(dest, src, sizeof(dest));
	
	if (
		size == 4
		&& dest[0] == 'a'
		&& dest[1] == 'b'
		&& dest[2] == 'c'
		&& dest[3] == 'd'
		&& *(dest + 4) == '\0'
	)
	{
		printf("OK!");
	}
	else
	{
		printf("KO!");
	}
}