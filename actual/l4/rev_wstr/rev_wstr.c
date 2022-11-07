#include <unistd.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int start;
	int end;
	int i = 0;
	int flag = 0;

	if (argc == 2)
	{
		i = (ft_strlen(argv[1]) - 1);
		while (argv[1][i])
		{
			while (argv[1][i] && ft_isspace(argv[1][i]))
				i--;
			end = i;
			while (argv[1][i] && !ft_isspace(argv[1][i]))
				i--;
			start = i + 1;
			flag = start;
			while(start <= end)
			{
				write (1, &argv[1][start],1);
				start++;
			}
			if (flag != 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}