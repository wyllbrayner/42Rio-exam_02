#include <unistd.h>
int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int ft_isdigit(int c)
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
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		signal = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	nbr = 0;
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = ((nbr * 10) + (str[i] - '0'));
		i++;
	}
	return (signal * nbr);
}

void	ft_putnbr(int c)
{
	char str[10] = "0123456789";

	if (c == -2147483648)
	{
		write(1, "-2", 2);
		c = 147483648;
	}
	if (c < 0)
	{
		write(1, "-", 1);
		c *= -1; 
	}
	if (c > 9)
		ft_putnbr(c / 10);
	write(1, &str[c % 10], 1);
}

int	ft_isprime(int	nbr)
{
	int	i;

	i = nbr;
	if (nbr <= 1)
		return (0);
	while (i > 1)
	{
		if ((nbr % i) == 0)
		{
			if ((nbr != i))
				return (0);
		}
		i--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	sum_prime;

	if (argc == 1)
		write(1, "0", 1);
	else
	{
		nbr = ft_atoi(argv[1]);
		if (nbr <= 1)
			write(1, "0", 1);
		else
		{
			sum_prime = 0;
			while (nbr >= 2)
			{
				if (ft_isprime(nbr))
					sum_prime += nbr;
				nbr--;
			}
			ft_putnbr(sum_prime);
		}
	}
	write(1, "\n", 1);
	return (0);
}