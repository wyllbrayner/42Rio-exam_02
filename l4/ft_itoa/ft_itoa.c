#include <stdlib.h>
int		ft_int_len(long nbr)
{
	int	size = 0;
	if (nbr == 0)
		size++;
	else
	{
		while (nbr != 0)
		{
			nbr /= 10;
			size++;
		}
	}
	return (size); 
}

char *ft_put_int_str(char *ret, long l_nbr, int int_len, int sg)
{
	ret[int_len] = '\0';
	if (l_nbr == 0)
	{
		int_len--;
		ret[int_len] = 0 + '0';
	}
	else
	{
		while (l_nbr != 0)
		{
			int_len--;
			ret[int_len] = ((l_nbr % 10) + '0');
			l_nbr /= 10;
		}
		if (sg == -1)
		{
			int_len--;
			ret[int_len] = '-';
		}
	}
	return (ret);
}

char *ft_itoa(int nbr)
{
	long	l_nbr;
	int		int_len;
	int		sg = 1;
	char	*ret;

	l_nbr = nbr;
	if (l_nbr < 0)
	{
		sg = -1;
		l_nbr *= -1;
	}
	int_len = ft_int_len(l_nbr);
	if (sg == -1)
		int_len++;
	ret = (char *)malloc(sizeof(char) * int_len + 1);
	if (!ret)
		return (NULL);
	ret = ft_put_int_str(ret, l_nbr, int_len, sg);
	return (ret);
}
/*
#include <stdio.h>
int	main(void)
{
	char *ret_f = ft_itoa(2147483647);
	printf("retorno de ft_itoa: %s\n", ret_f);
	ret_f = ft_itoa(-2147483648);
	printf("retorno de ft_itoa: %s\n", ret_f);
	ret_f = ft_itoa(-21);
	printf("retorno de ft_itoa: %s\n", ret_f);
	free(ret_f);
	return (0);
}
*/