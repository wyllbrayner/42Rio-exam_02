int ft_isspace(int c)
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

int	ft_atoi(const char *str)
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
		nbr = ((nbr * 10) + (str[i] - '0'));
		i++;
	}
	return (nbr * signal);
}

