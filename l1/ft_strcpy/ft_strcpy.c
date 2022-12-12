int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = ft_strlen(s2);
	while(i >= 0)
	{
		s1[i] = s2[i];
		i--;
	}
	return (s1);
}
