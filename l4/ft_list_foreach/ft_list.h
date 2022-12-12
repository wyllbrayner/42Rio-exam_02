#ifndef FT_LIST3_H
# define FT_LIST3_H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif