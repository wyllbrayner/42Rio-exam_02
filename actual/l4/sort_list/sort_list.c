#include "sort_list2.h"
#include <stddef.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int swap;

    tmp = lst;
    while (lst->next != NULL)
    {
        if (((*cmp)(lst->data, lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}

/*
int ascending(int a, int b)
{
    return (a <= b);
}

void    ft_print_list(t_list *begin)
{
    while (begin != NULL)
    {
        printf("%d -> ", begin->data);
        begin = begin->next;
    }
    printf("NULL\n");
}

#include <stdio.h> ///printf
#include <stdlib.h>
int main(void)
{
    t_list *a = (t_list *)malloc(sizeof(t_list) * 1);
    t_list *b = (t_list *)malloc(sizeof(t_list) * 1);
    t_list *c = (t_list *)malloc(sizeof(t_list) * 1);
    t_list *d = (t_list *)malloc(sizeof(t_list) * 1);

    a->data = 15;
    b->data = -200;
    c->data = 0;
    d->data = -15;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    ft_print_list(a);
    printf("=======================================\n");
    sort_list(a, &ascending);
    ft_print_list(a);
    free(a);
    free(b);
    free(c);
    free(d);
    return (0);
}
*/