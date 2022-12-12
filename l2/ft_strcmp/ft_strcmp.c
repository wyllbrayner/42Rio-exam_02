int	ft_strcmp(char *s1, char *s2)
{
	unsigned char 	*us1;
	unsigned char 	*us2;
	int		i;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (us1[i] && us2[i])
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	if (!us1[i] && !us2[i])
		return (0);
	else if (!us1[i])
		return (-us2[i]);
	else
		return (us1[i]);	
}

