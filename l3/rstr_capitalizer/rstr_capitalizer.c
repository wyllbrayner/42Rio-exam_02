#include <unistd.h>
int ft_isspace(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] += 32;
                if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') && (ft_isspace(argv[i][j + 1]) || argv[i][j + 1] == '\0'))
                    argv[i][j] -= 32;
                write(1, &argv[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}