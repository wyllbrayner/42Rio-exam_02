/*
Nível 1
isspace //apenas espaço e tab 
putnbr  //apenas positivos
putstr  
strcpy
strlen
swap    //int
isupper
islower
toupper
tolower
*/

/*
Nível 2
atoi
putnbr
strcmp
strcspn nova???
strspn nova???
strdup
strpbrk nova???
nova???
strchr
*/

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if  (s[i] == c)
            return (&s[i]);
        i++;
    }
    if (s[i] == c)
        return (&s[i]);
    return (NULL);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
char *ft_strdup(char *str)
{
    int     len;
    int     i;
    char    *dup;

    len = ft_strlen(str);
    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len);
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

s = WYLLBRAYNER
a = 0123456789

size_t ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

//    if (!s)
//        return (0);
//    if (!reject)
//        return (ft_strlen(s));
    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int ft_strcmp(const char *s1, const char *s2)
{
    unsigned char   *us1;
    unsigned char   *us2;
    int             i;

    us1 = (unsigned char *)s1;
    us2 = (unsigned char *)s2;
    i = 0;
    while (us1[i] && us2[i])
    {
        if (us1[i] != us2[i])
            return (us1[i] - us2[i]);
        i++;
    }
    if (!us1[i] && !us2[i])
        return (0);
    else if (!us1[i])
        return (-1);
    else
        return (1);
}


void    ft_putnbr(int nbr)
{
    int i;
    char    str = "0123456789";

    i = 0;
    if (nbr == 2147483648)
    {
        write(1, "-2", 2);
        nbr = 147483648;
    }
    else if (nbr < 0)
        nbr = (nbr * -1);
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    write(1, &str[(nbr % 10)], 1);
}

int ft_isspace_my(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}

int ft_isdigit_my(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
int ft_atoi(char *str)
{
    int i;
    int signal;
    int nbr;

    i = 0;
    signal = 1;
    nbr = 0;
    while (str[i] && ft_isspace_my(str[i]))
        i++;
    if ((str[i] == '-') || (str[i] == '+'))
    {
        if (str[i] == '-')
            signal = -1;
        i++;
    }
    while (str[i] && ft_isdigit_my(str[i]))
    {
        nbr = ((nbr * 10) + (str[i] - '0'));
        i++;
    }
    return (signal * nbr);
}


void    ft_my_putnbr(int n)
{
    if (n > 9)
        ft_my_putnbr(n / 10);
    write(1, ((n % 10) + '0'), 1);
}

int ft_isspace(int c)
{
    if (c == '\f' || c == '\n' || c =  '\r' || c == '\t' || c == '\v' || c == 32)
        return (1);
    return (0);
}

void    ft_putstr(char *str);
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }

}

void    ft_putstr(char *str)
{
    int i;

    i = 0
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

void    ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

int ft_strleni(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (0);
}

char *strcpy(char *dest, char *src)
{
    int len;

    len = ft_strleni(src);
    while (len >=0)
    {
        dest[len] = src[len]
        len--;
    }
    return (dest);
}

int ft_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int ft_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int ft_toupper(int c)
{
    if (ft_islower(c))
        return (c - 32);
    return(c);
}

int ft_tolower(int c)
{
    if (ft_isupper(c))
        return (c + 32);
    return (c);
}