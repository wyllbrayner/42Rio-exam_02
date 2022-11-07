#include <stdlib.h>
int *ft_rrange(int start, int end)
{
    int max;
    int min;
    int len;
    int i = 0;
    int flag;
    int *ret;

    if (start >= end)
    {
        max = start;
        min = end;
        flag = 1;
    }
    else if (start < end)
    {
        max = end;
        min = start;
        flag = -1;
    }
    len = ((max - min) + 1);
    ret = (int *)malloc(sizeof(int) * len);
    if (!ret)
        return (NULL);
    while (i < len)
    {
        ret[i] = end;
        if (flag == 1)
            end++;
        else if (flag == -1)
            end--;
        i++;
    }
    return (ret);
}

/*
#include <stdio.h>
int main(void)
{
    int *ret_f;
    int i = 0;

    ret_f = ft_rrange(1, 3);
    while (i < 3)
    {
        printf("%d\n", ret_f[i]);
        i++;
    }
    return (0);
}
*/