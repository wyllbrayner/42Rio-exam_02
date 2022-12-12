#include "sort_list.h"
#include <stddef.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int     swap;
    t_list  *tmp;

    if (lst == NULL || cmp == NULL)
        return (lst);

    tmp = lst;
    while (tmp->next != NULL)
    {
        if (((*cmp)(tmp->data, tmp->next->data)) == 0)
        {
            swap = tmp->data;
            tmp->data = tmp->next->data;
            tmp->next->data = swap;
            tmp = lst;
        }
        else
            tmp = tmp->next;
    }
    lst = tmp;
    return (lst);
}

/*
int ascending(int a, int b)
{
    return (a <= b);
}

#include <stdio.h>
#include <stdlib.h>
void ft_print_list(t_list *begin)
{
    while (begin != NULL)
    {
        printf("%d -> ", begin->data);
        begin = begin->next;
    }
    printf(" NULL\n");
}

int main(void)
{
    t_list *a = (t_list *)malloc(sizeof(t_list));
    t_list *b = (t_list *)malloc(sizeof(t_list));
    t_list *c = (t_list *)malloc(sizeof(t_list));
    t_list *d = (t_list *)malloc(sizeof(t_list));

    a->data = 20;
    b->data = -500;
    c->data = 3;
    d->data = 20;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    ft_print_list(a);
    printf("================================================\n");
    sort_list(a, &ascending);
    ft_print_list(a);
    free(a);
    free(b);
    free(c);
    free(d);
    return (0);
}
*/