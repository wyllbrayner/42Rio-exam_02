#include<stdlib.h>
#include<unistd.h>
void	ft_putnbr(int n)
{
	char str[] = "0123456789";
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &str[(n % 10)], 1);
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	i;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if (n1 > n2)
			i = n2;
		else
			i = n1;
		while (i > 0)
		{
			if ((n1 % i) == 0 && (n2 % i) == 0)
			{
				ft_putnbr(i);
				break ;
			}
			i--;
		}
	}
	write(1, "\n", 1);
	return(0);
}