int		ft_atoi_base(const char *str, int str_base);
int		ft_get_digit(char c, int digits_in_base);
char	ft_to_lower(char c);
int		ft_isspace(int c);

/*
*/
#include <stdio.h>
int	main(void)
{
	printf("base: 02 | %d\n", ft_atoi_base("01110111  ", 2));
	printf("base: 16 | %d\n", ft_atoi_base("1A82  ", 16));
	printf("base: 04 | %d\n", ft_atoi_base("  -3102  ", 4));
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int result = 0;
	int sign = 1;
	int digit;

	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	digit = ft_get_digit(ft_to_lower(str[i]), str_base);
	while (digit >= 0)
	{
		result = (result * str_base) + digit;
		i++;
		digit = ft_get_digit(ft_to_lower(str[i]), str_base);
	}
	return (result * sign);
}

int ft_get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (c + 10 - 'a');
	else
		return (-1);
}

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}