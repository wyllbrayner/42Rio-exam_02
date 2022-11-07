#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    int nbr;
    int i;
    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        if (nbr >= 0)
        {
            if (nbr == 0)
                printf("0");
            else if (nbr == 1)
                printf("1");
            else
            {
                i = 2;
                while (i <= nbr)
                {
                    if ((nbr % i) == 0)
                    {
                        printf("%d", i);
                        if (nbr == i)
                            break ;
                        printf("*");
                        nbr /= i;
                        i = 2;
                    }
                    i++;
                }
            }
        }
    }
    printf("\n");
    return (0);
}