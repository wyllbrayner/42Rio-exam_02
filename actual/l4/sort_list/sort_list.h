#ifndef SORT_LIST2_H
# define SORT_LIST2_H
typedef struct s_list t_list;

struct s_list
{
    int     data;
    t_list *next;
};

#endif