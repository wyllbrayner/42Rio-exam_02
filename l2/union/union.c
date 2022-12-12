#include<unistd.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_bzero(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		len;
	int		i;
	int		j;
	char	c;

	if (argc == 3)
	{
		len = ft_strlen(argv[1]) + ft_strlen(argv[2]);
		char bkp[len + 1];
		bkp[len] = '\0';
		ft_bzero(bkp);
		i = 0;
		j = 0;
		while (argv[1][i])
		{
			if (ft_strchr(bkp, argv[1][i]) == 0)
			{
				c = argv[1][i];
				write(1, &c, 1);
				bkp[j] = c;
				j++;				
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (ft_strchr(bkp, argv[2][i]) == 0)
			{
				c = argv[2][i];
				write(1, &c, 1);
				bkp[j] = c;
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

