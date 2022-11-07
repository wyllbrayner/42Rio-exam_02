#include "ft_list.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

/*
#include <stddef.h>
#include <stdlib.h> ///malloc e free
#include <stdio.h>  ///printf
void    ft_print_list(t_list *begin)
{
    while (begin != NULL)
    {
        printf("%s -> ", (char *)begin->data);
        begin = begin->next;
    }
    printf("NULL\n");
}

void    ft_tolower(void *str)
{
    char *string;
    int i = 0;

    string = (char *)str;
    while (string[i])
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] += 32;
        i++;
    }
}

int main(void)
{
    t_list *a = (t_list *)malloc(sizeof(t_list));
    t_list *b = (t_list *)malloc(sizeof(t_list));
    t_list *c = (t_list *)malloc(sizeof(t_list));
    t_list *d = (t_list *)malloc(sizeof(t_list));
    char    nbr1[] = "AAAAAAAAA";
    char    nbr2[] = "BBBBBBBBB";
    char    nbr3[] = "CCCCCCCCC";
    char    nbr4[] = "DDDDDDDDD";

    a->data = nbr1;
    b->data = nbr2;
    c->data = nbr3;
    d->data = nbr4;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    ft_print_list(a);
    printf("========================================\n");
    ft_list_foreach(a, &ft_tolower);
    ft_print_list(a);
    free(a);
    free(b);
    free(c);
    free(d);
    return (0);
}
*/