void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int				tmp;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
/*
#include<stdio.h>
int	main(void)
{
	int		tab[] = {1, 15, 10, 13, 12, 23, 9, -100, 0};
	unsigned int	size = 9;
	unsigned int	i = 0;
	while (i < size)
	{
		printf("tab[%u]: %d\n", i, tab[i]);
		i++;
	}
	printf("=========================\n");
	sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("tab[%u]: %d\n", i, tab[i]);
		i++;
	}
	return (0);
}
*/