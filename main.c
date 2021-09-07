#include <unistd.h>

int	main(void)
{
	int		i = 0;
	char	str[] = "Hello world!!";
	
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return (0);
}
