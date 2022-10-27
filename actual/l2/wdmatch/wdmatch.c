#include<unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	flag;
	char	c;

	i = 0;
	j = 0;
	flag = 1;
	if (argc == 3)
	{
		while (argv[1][i] && flag == 1)
		{
			while(argv[2][j] && flag == 1)
			{
				if (argv[1][i] == argv[2][j])
				{
					if (!argv[1][i + 1])
						flag = 0;
					j++;
					break ;
				}
				else
					j++;
			}
			i++;
		}
		if (flag == 0)
		{
			i = 0;
			while (argv[1][i])
			{
				c = argv[1][i];
				write(1, &c, 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
