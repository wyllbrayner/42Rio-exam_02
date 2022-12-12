#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
			{
				len = 64 - argv[1][i];
				c = 91 + len;
			}
			else if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
			{
				len = 96 - argv[1][i];
				c = 123 + len;
			}
			else
				c = argv[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

