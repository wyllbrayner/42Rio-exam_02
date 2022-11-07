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

char	*ft_strpbrk(const char *s1, const char *s2)
{
	char	*s1c;
	char	*s2c;

	s1c = (char *)s1;
	s2c = (char *)s2;
	while (*s1c)
	{
		if (ft_strchr(s2c, *s1c))
			return (s1c);
		s1c++;
	}
	return (s1c);
}

