#include <stddef.h>
int	ft_strchr(const char *str, int c)
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

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;

	if (!s || !accept)
		return (0);
	i = 0;
	while (s[i])
	{
		if (!ft_strchr(accept, s[i]))
			return (i);
		i++;
	}
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	const accept[] = "AEIOU";
	char	const str[] = "WYLL BRAYNER";

	printf("retorno de    strspn é: %zu\n", strspn(str, accept));
	printf("retorno de ft_strspn é: %zu\n", ft_strspn(str, accept));
	return (0);
}
*/
