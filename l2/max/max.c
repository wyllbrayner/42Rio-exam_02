#include <stddef.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int 			max;

	if (tab == NULL || len == 0)
		return (0);
	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);	
}
