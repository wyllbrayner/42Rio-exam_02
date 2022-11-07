int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	char	tmp;
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "WYLL BRAYNER";
	printf("retorno de ft_strrev é: %s\n", ft_strrev(str1));
	return (0);
}
*/
