#include <stdio.h>

int	ft_strlen(char const *str)
{
	int	i;
	while (str[i])
		i++;
	return (i);
}

int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int	ft_power(int base, int	pwr)
{
	int	i;
	int	result;

	if (pwr == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= pwr)
	{
		result *= base; 	
		i++;
	}
	return (result);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		signal = 1;
	int		nbr = 0;
	int		i = 0;
	int		j = 0;
	int		c;
	int		len = ft_strlen(str);
	char	lstr[len + 1];
	while (ft_isspace(str[i]))
		i++;
	while (str[i] && !ft_isspace(str[i]))
	{
		if (ft_isupper(str[i]))
			lstr[j] = (str[i] + 32);
		else
			lstr[j] = str[i];
		i++;
		j++;
	}
	lstr[j] = '\0';
	j--;
	i = 0;
	while (!ft_isspace(lstr[j]) && lstr[j] && lstr[j] != '+' && lstr[j] != '-')
	{
		if (lstr[j] >= 'a' && lstr[j] <= 'f')
			c = ((lstr[j] - 97) + 10);
		else if (lstr[j] >= '0' && lstr[j] <= '9')
			c = (lstr[j] - 48);
		nbr = nbr + (c * ft_power(str_base, i));
		i++;
		j--;
	}
	if (lstr[j] && lstr[j] == '-')
		signal = -1;
	return (signal * nbr);
}
/*
*/

int	main(void)
{
	printf("%d\n", ft_atoi_base("01110111  ", 2));
	printf("%d\n", ft_atoi_base("1A82  ", 16));
	return (0);
}
