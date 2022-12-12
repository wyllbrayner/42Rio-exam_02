#include <unistd.h>
int     ft_isspace(int c)
{
    if (c == '\t' || c == ' ')
        return (1);
    return (0);
}

int     ft_strlen(char *str)
{
    int     i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     main(int argc, char **argv)
{
    int i;
    int end;
    int start;
    int flag = 0;
    if (argc == 2)
    {
        i = (ft_strlen(argv[1]) - 1);
        while (argv[1][i])
        {
            while (argv[1][i] && ft_isspace(argv[1][i]))
                i--;
            end = i;
            while (argv[1][i] && !ft_isspace(argv[1][i]))
                i--;
            flag = start;
            start = i + 1;
            while (start <= end)
            {
                if (flag != 0 )
                {
                    write(1, " ", 1);
                    flag = 0;
                }
                write(1, &argv[1][start], 1);
                start++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}