#include<unistd.h>
int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while (ft_isspace(argv[1][i]) && argv[1][i])
			i++;
		while (!ft_isspace(argv[1][i]) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
