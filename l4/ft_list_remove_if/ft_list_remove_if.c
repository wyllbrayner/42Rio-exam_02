#include "ft_list.h"
#include <stdlib.h>
#include <stddef.h>

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL || data_ref == NULL || cmp == NULL) 
        return ;
    
    t_list *tmp;
    tmp = *begin_list;

    if (((*cmp)(tmp->data, data_ref)) == 0)
    {
        *begin_list = tmp->next;
        free(tmp);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    tmp = *begin_list;
    ft_list_remove_if(&tmp->next, data_ref, cmp);
}

/*
#include <stdio.h>
#include <string.h>
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
    char    stra[] = "AAAAa";
    char    strb[] = "BBBBb";
    char    strc[] = "CCCCc";
    char    strd[] = "DDDDd";

    a->data = stra;
    b->data = strb;
    c->data = strc;
    d->data = strd;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    ft_print_list(a);
    printf("==============================================================\n");
    ft_list_remove_if(&a, strc, &strcmp);
//    ft_list_remove_if(NULL, strb, &strcmp);
//    ft_list_remove_if(&a, NULL, &strcmp);
//    ft_list_remove_if(&a, strb, NULL);
//    ft_list_remove_if(NULL, NULL, NULL);
    ft_print_list(a);
    return (0);
}
*/