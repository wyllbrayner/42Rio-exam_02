#include<stddef.h>
int	ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	if (!s || !reject)
		return (0);
	i = 0;
	while (s[i])
	{
		if (ft_strchr(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("   strcspn: %ld\n", strcspn("WYLL42", "0123456789"));
	printf("ft_strcspn: %ld\n", ft_strcspn("WYLL42", "0123456789"));
}
*/
