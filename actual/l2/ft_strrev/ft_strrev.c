int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);

}
char	*ft_strrev(char *str)
{
	int len;
	int i;

	len = ft_strlen(str);
	i = 0;
	char string[len + 1];
	while (len > 0)
	{
		string[i] = str[len - 1];
		len--;
		i++;
	}
	string[i] = '\0';
	i = 0;
	while (string[i])
	{
		str[i] = string[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
