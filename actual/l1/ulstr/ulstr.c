#include <unistd.h>


int	main(int argc, char **argv)
{
	int	i;
	char	str;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				str = (argv[1][i] + 32);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				str = (argv[1][i] - 32);
			else
				str = argv[1][i];
			write(1, &str, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
