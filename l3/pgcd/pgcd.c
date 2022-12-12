#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;
	int	min;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if ((n1 > 0) && (n2 > 0))
		{
			if (n1 > n2)
				min = n2;
			else
				min = n1;
			while (min > 0)
			{
				if ((n1 % min) == 0 && (n2 % min) == 0)
				{
					printf("%d", min);
					break ;
				}
				min--;
			}
		}
	}
	printf("\n");
	return(0);
}