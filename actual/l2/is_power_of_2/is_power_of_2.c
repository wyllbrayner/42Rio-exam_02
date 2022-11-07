int	is_power_of_2(unsigned int n)
{
	unsigned int	pwr;

	if (n > 1)
	{
		pwr = 2;
		while (pwr <= n)
		{
			if (pwr == n)
				return (1);
			pwr *= 2;
		}
	}
	return (0);
}
