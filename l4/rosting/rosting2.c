#include <stdlib.h>
#include <unistd.h>
int ft_isspace(int c)
{
    if (c == '\t' || c == ' ')
        return (1);
    return (0);
}

int     ft_len_string(char *str)
{
    int     i = 0;
    while (str[i] && !ft_isspace(str[i]))
        i++;
    return (i);
}

char    *ft_putwd(char *str)
{
    int     len_word = ft_len_string(str);
    int     i = 0;
    char    *wd;
    
    wd = (char *)malloc(sizeof(char) * len_word + 1);
    if (!wd)
        return (NULL);
    while (str[i] && !ft_isspace(str[i]))
    {
        wd[i] = str[i];
        i++;
    }
    wd[i] = '\0';
    return (wd);
}

char    **ft_fill_wd(char **ret_split, char *str)
{
    int     i = 0;
    int     j = 0;

    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i])
    {
        ret_split[j] = ft_putwd(&str[i]);
        j++;
        while (str[i] && !ft_isspace(str[i]))
            i++;
        while (str[i] && ft_isspace(str[i]))
            i++;
    }
    ret_split[j] = '\0';
    return (ret_split);
}

int     ft_len_word(char *str)
{
    int     i = 0;
    int     len_word = 0;
    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i])
    {
        len_word++;
        while (str[i] && !ft_isspace(str[i]))
            i++;
        while (str[i] && ft_isspace(str[i]))
            i++;
    }
    return (len_word);
}

char    **ft_split(char *str)
{
    int     len_wd = ft_len_word(str);
    char    **ret_split;
    ret_split = (char **)malloc(sizeof(char *) * len_wd + 1);
    if (!ret_split)
        return (NULL);
    ret_split = ft_fill_wd(ret_split, str);
    return (ret_split);
}

int     main(int argc, char **argv)
{
    char    **ret_f;
    int     i = 1;
    int     j;
    int     flag = 0;
    if (argc == 2)
    {
        ret_f = ft_split(argv[1]);
        if (ret_f)
        {
            while (ret_f[i])
            {
                flag = 1;
                j = 0;
                while (ret_f[i][j])
                {
                    write(1, &ret_f[i][j], 1);
                    j++;
                }
                i++;
                if (ret_f[i])
                    write(1, " ", 1);
            }
            if (flag == 1)
                write(1, " ", 1);
            j = 0;
            while (ret_f[0][j])
            {
                write(1, &ret_f[0][j], 1);
                j++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}