#include<unistd.h>
int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		int	i;
		int	j;

		i = 1;
		j = 0;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] += 32;
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (j == 0 || ft_isspace(argv[i][j - 1])))
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
