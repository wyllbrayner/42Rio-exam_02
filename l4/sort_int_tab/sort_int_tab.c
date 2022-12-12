#include <stddef.h>

void    sort_int_tab(int *tab, unsigned int size)
{
    int             swap;
    unsigned int    i = 0;
    if (tab == NULL)
        return ;
    while (i < (size - 1))
    {
        if (tab[i] >= tab[i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        else
            i++;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int             tab[] = {30, 20, 10, 15, 0, 100, -2147483648};
    unsigned int    size = 7;
    unsigned int    i = 0;

    while (i < size)
    {
        printf("tab[%u] = %d\n", i, tab[i]);
        i++;
    }
    printf("=================================================================\n");
    i = 0;
    sort_int_tab(tab, size);
    while (i < size)
    {
        printf("tab[%u] = %d\n", i, tab[i]);
        i++;
    }
    return (0);
}
*/