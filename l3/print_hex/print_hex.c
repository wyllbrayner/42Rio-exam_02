void	ft_puthex(long nbr)
{
	char	str[] = "0123456789abcdef";
	
	if (nbr > 16)
		ft_puthex(nbr / 16);
	write(1, &str[(nbr % 16)], 1);
}

/*
#include<unistd.h>
int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

long	ft_atol(char *str)
{
	int		i = 0;
	int		signal = 1;
	long	nbr = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while(str[i] && ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * signal);
}

int	main(int argc, char **argv)
{
	long	nbr;
	if (argc == 2)
	{
		nbr = ft_atol(argv[1]);
		if (nbr < 0)
		{
			write(1, "\n", 1);
			return (0);
		}
		ft_puthex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
*/