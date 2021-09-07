#include <stdio.h>

// Данная программа показывает один из способов использовать sizeof для динамического массива

int	main(void)
{
	char	str[] = "Hello world!!";
	int	i = 0;
	
	while (i < (sizeof(str)/sizeof(str[0])))
	{
		printf("%c", arr[i]);
		i++;
	}
	return (0);
}
