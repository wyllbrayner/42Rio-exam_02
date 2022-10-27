#include<unistd.h>
int	main(int argc, char **argv)
{
	int	i;
	char	c;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == '_')
			{
				c = (argv[1][i + 1] - 32);		
				write(1, &c, 1);
				i = i + 2;
			}
			else
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
