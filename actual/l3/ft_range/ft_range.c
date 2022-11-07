#include<stdlib.h>
int	*ft_range(int start, int end)
{
	int	max;
	int	min;
	int	len;
	int	i = 0;
	int	flag;
	int	*ret;

	if (start >= end)
	{
		max = start;
		min = end;
		flag = -1;
	}
	else
	{
		max = end;
		min = start;
		flag = 1;
	}
	len = ((max - min) + 1);
	ret = (int *)malloc(sizeof(int) * len);
	if (!ret)
		return (NULL);
	while (i < len)
	{
		ret[i] = start;
		if (flag == 1)
			start++;
		else if (flag == -1)
			start--;	
		i++;
	}
	return (ret);
}

/*
#include<stdio.h>
int	main(void)
{
	int	*ret_f;
	int	i;

	ret_f = ft_range(1, 3);
	i = 0;
	while (i < 3)
	{
		printf("%d\n", ret_f[i]);
		i++;
	}
	free(ret_f);
	return (0);
}
*/