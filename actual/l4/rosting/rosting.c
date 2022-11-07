#include <unistd.h>
int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	flag1 = 0;
	int	flag2 = 0;

	if (argc == 2)
	{
		while (argv[1][i] && ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i] && !ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i] && ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (!ft_isspace(argv[1][i]))
			{
				if (flag1 == 1)
				{
					write(1, " ", 1);
					flag1 = 0;
				}
				write(1, &argv[1][i], 1);
				flag2 = 1;
			}
			if (ft_isspace(argv[1][i]))
				flag1 = 1;
			i++;
		}
		i = 0;
		while(argv[1][i] && ft_isspace(argv[1][i]))
			i++;
		while (argv[1][i] && !ft_isspace(argv[1][i]))
		{
			if (flag2 == 1)
			{
				write(1, " ", 1);
				flag2 = 0;
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}