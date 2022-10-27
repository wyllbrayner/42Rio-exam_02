#include<unistd.h>

int	main(int argc,  char **argv)
{
	int i;
	int j;
	int len;

	if (argc == 2)
	{
		i  = 0;
		while (argv[1][i])
		{
			j = 0;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				len = (argv[1][i] - 64);
				while (j < len)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				len = (argv[1][i] - 96);
				while (j < len)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

