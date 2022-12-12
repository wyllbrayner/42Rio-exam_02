#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strchr(char *str, int c)
{
	int 		i;
	unsigned char 	*ustr;

	ustr = (unsigned char *)str;
	i = 0;
	while (str[i])
	{
		if (ustr[i] == (unsigned char)c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int len;
	int	i;
	int	j;
	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		char	str1[len + 1];

		i = 0;
		j = 0;
		str1[j] = '\0';
		while(argv[1][i])
		{
			if(ft_strchr(argv[2], argv[1][i]) && !ft_strchr(str1, argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				str1[j] = argv[1][i];
				j++;
				str1[j] = '\0';
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}