#include <unistd.h>
int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;
	int	flag = 0;
	if (argc == 3)
	{
		while (argv[1][i] && (flag == 0))
		{
			while (argv[2][j] && (flag == 0))
			{
				if (argv[1][i] == argv[2][j])
				{
					if (!argv[1][i + 1])
						flag = 1;
					j++;
					break ;
				}
				else
					j++;
			}
			i++;
		}
		if (!argv[1][0] || flag == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
