#include "ft_list.h"
#include <stddef.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    if (begin_list == NULL || f == NULL)
        return ;
        
    while (begin_list != NULL)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

/*
#include <stdlib.h>
#include <stdio.h>

void ft_to_upper(void *str)
{
    int     i;
    char    *string;
    
    i = 0;
    string = (char *)str;
    while (string[i])
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
        i++;
    }
}

void    ft_print_list(t_list *begin)
{
    if (begin == NULL)
        return ;

    while (begin != NULL)
    {
        printf("%s -> ", (char *)begin->data);
        begin = begin->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list  *a = (t_list *)malloc(sizeof(t_list));
    t_list  *b = (t_list *)malloc(sizeof(t_list));
    t_list  *c = (t_list *)malloc(sizeof(t_list));
    t_list  *d = (t_list *)malloc(sizeof(t_list));
    char    stra[] = "Aaaaaaaaaaaaaaaaa";
    char    strb[] = "Bbbbbbbbbbbbbbbbb";
    char    strc[] = "Ccccccccccccccccc";
    char    strd[] = "Ddddddddddddddddd";

    a->data = stra;
    b->data = strb;
    c->data = strc;
    d->data = strd;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    ft_print_list(a);
    printf("===========================================\n");
    ft_list_foreach(a, &ft_to_upper);
//    ft_list_foreach(NULL, &ft_to_upper);
//    ft_list_foreach(a, NULL);
//    ft_list_foreach(NULL, NULL);
    ft_print_list(a);
    free(a);
    free(b);
    free(c);
    free(d);
    return (0);
}
*/