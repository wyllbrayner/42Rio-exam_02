#include <stdlib.h>

int     ft_isspace(int  c)
{
    if (c == '\t' || c == ' ' || c == '\n')
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
    char    *word = (char *)malloc(sizeof(char) * (len_string + 1));
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
    int     i = 0;
    int     j = 0;
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
    int     i = 0;
    int     num_word = 0;

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

char **ft_split(char *str)
{
    if (str == NULL)
        return (NULL); 
    int     len_word = ft_len_word(str);
    char    **ret_split = (char **)malloc(sizeof(char *) * (len_word + 1));
    if (!ret_split)
        return (NULL);
    ret_split = ft_fill_word(ret_split, str);
    return (ret_split);
}

/*
#include <stdio.h>
int main(void)
{
    char *str = '\0';
//    char str[] = "       wyll Brayner O  liveir a Car neir   O     ";
    char    **ret_split = ft_split(str);
    int     i = 0;
    if (ret_split != NULL)
    {
        while (ret_split[i])
        {
            printf("%s\n", ret_split[i]);
            free(ret_split[i]);
            i++;
        }
        free(ret_split);
    }
    else
        printf("Retorno NULL\n");
    return (0);
}
*/