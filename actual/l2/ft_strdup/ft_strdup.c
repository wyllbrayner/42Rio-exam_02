#include <stdlib.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	len;
	int	i;
	char	*tmp;

	len = ft_strlen(src);
	
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (src[i])
		tmp[i] = src[i];
	tmp[i] = '\0';
	return (tmp);
}
