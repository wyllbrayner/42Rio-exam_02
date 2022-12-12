#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char str;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
				str = (argv[1][i] + 13);
				write(1, &str, 1);
			}
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			{
				str = (argv[1][i] - 13);
				write(1, &str, 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				str = (argv[1][i] + 13);
				write(1, &str, 1);
			}
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
				str = (argv[1][i] - 13);
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
