#include<unistd.h>

int	ft_isspace(int c)
{
	if (c == 32 || c == '\t')
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int	len;
	int	end;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (argv[1][len - 1] && ft_isspace(argv[1][len]))
			len--;
		end = len;
		while(argv[1][len - 1] && !ft_isspace(argv[1][len]))
			len--;
		len++;
		while (len < end)
		{
			write(1, &argv[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
