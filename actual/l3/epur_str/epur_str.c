#include <unistd.h>
int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}
int	main(int argc, char **argv)
{
	int	i;
	int	flag;

	if (argc == 2)
	{
		i = 0;
		flag = 0;
		while (ft_isspace(argv[1][i]) && argv[1][i])
			i++;
		while (argv[1][i])
		{
			if (!ft_isspace(argv[1][i]))
			{
				if (flag)
				{
					write (1, " ", 1);
					flag = 0;	
				}
				write (1, &argv[1][i], 1);
			}
			else if (ft_isspace(argv[1][i]))
				flag = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

