#include <unistd.h>
#include <stdlib.h>

int     ft_isspace(int c)
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

char    *ft_put_string(char *str)
{
    int     i = 0;
    int     len_string = ft_len_string(str);
    char    *word = (char *)malloc (sizeof(char) * (len_string + 1));
    if (!word)
        return (NULL);
    while (str[i] && !ft_isspace(str[i]))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_fill_word(char **ret_split, char *str)
{
    int i = 0;
    int j = 0;
    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i])
    {
        ret_split[j] = ft_put_string(&str[i]);  
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
    int i = 0;
    int num_word = 0;
    while (str[i] && ft_isspace(str[i]))
        i++;
    while (str[i])
    {
        num_word++;
        while (str[i] && !ft_isspace(str[i]))
            i++;
        while (str[i] && ft_isspace(str[i]))
            i++;
    }
    return (num_word);
}

char    **ft_split(char *str)
{
    int     len_word = ft_len_word(str);
    char    **ret_split = (char **)malloc(sizeof(char *) * (len_word + 1));
    if (!ret_split)
        return (NULL);
    ret_split = ft_fill_word(ret_split, str);
    return (ret_split);
}

int     main(int argc, char **argv)
{
    int     len = 0;
    int     j;
    char    **ret_split;
    if (argc == 2)
    {
        ret_split = ft_split(argv[1]);
        if (ret_split)
        {
            while (ret_split[len])
                len++;
            while (ret_split[len -  1])
            {
                j = 0;
                while (ret_plit[len - 1][j])
                {
                    write(1, &ret_split[len - 1][j], 1);
                    j++;
                }
                if ((len - 1) > 0)
                    write(1, " ", 1);
                len--;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}