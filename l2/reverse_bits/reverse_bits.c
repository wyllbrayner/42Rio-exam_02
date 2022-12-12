unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	ret;
	int				val[8] = {1, 2, 4, 8, 16, 32, 64, 128};
	int				i;
	int				j;

	i = 7;
	j = 0;
	ret = 0;
	while (i >= 0)
	{
		if ((octet >> i) & 1)
			ret += val[j]; 
		i--;
		j++;
	}
	return (ret);
}

/*
#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int	i;
	i = 7;
	while (i >= 0)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}

int	main(void)
{
	unsigned char octet;

	octet = 67;
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(reverse_bits(octet));
	write(1, "\n", 1);
	return (0);
}
*/
