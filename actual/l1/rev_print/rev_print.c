#include <unistd.h>

int ft_strlen_my(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen_my(argv[1]);
		while (len > 0)
		{
			write(1, &argv[1][len - 1], 1);
			len--;
		}

	}
	write(1, "\n", 1);
	return (0);
}
