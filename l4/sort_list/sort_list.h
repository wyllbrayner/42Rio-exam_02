#ifndef SORT_LIST3_H
# define SORT_LIST3_H

typedef struct s_list t_list;

struct s_list
{
    int     data;
    t_list  *next;
};

#endif