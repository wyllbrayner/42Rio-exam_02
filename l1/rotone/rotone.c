#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char str;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
				write(1, "a", 1);
			else if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
			{
				str = (argv[1][i] + 1);
				write(1, &str, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
