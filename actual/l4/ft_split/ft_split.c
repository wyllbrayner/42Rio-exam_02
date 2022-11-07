#include <stdlib.h>

#include <stdio.h>   ////printf !!!!!

int ft_isspace(int c)
{
    if (c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);
}

int ft_len_string(char *str)
{
    int i = 0;
    while (str[i] && !ft_isspace(str[i]))
        i++;
    return (i);
}

char *ft_put_string(char *str)
{
    int i = 0;
    int len_string = ft_len_string(str);
    char *string;
    string = (char *)malloc(sizeof(char) * (len_string + 1));
    if (!string)
        return (NULL);
    while (str[i] && !ft_isspace(str[i]))
    {
        string[i] = str[i];
        i++;
    }
    string[i] = '\0';
    return (string);
}

char **ft_put_word(char **ret_split, char *str)
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

int ft_num_word(char *str)
{
    int i;
    int num_word = 0;

    i = 0;
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
    printf("ft_num_word: %d\n", num_word);
    return (num_word);
}

char    **ft_split(char *str)
{
    int     num_word;
    char    **ret_split;

    num_word = ft_num_word(str);
    ret_split = (char **)malloc(sizeof(char *) * (num_word + 1));
    ret_split = ft_put_word(ret_split, str);
    return (ret_split);
}

int main(void)
{
    int i = 0;
    char **ret_f = ft_split("       WYLL                BRAYNer    Oliveira CArneiro  ");

    while (i < 4)
    {
        printf("%s\n", ret_f[i]);
        i++;
    }
    return (0);
}