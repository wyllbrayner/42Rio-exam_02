#include <unistd.h>
int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	nbr;

	i = 0;
	signal = 1;
	nbr = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (signal * nbr);
}

void	ft_putnbr(int n)
{
	char str[] = "0123456789";

	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &str[(n % 10)], 1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;

	if (argc == 1)
		write(1, "\n", 1);
	else if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		i = 1;
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(nbr * i);
			write(1, "\n", 1);			
			i++;
		}
	}
	return (0);
}
