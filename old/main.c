/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/ft_exam02.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int main(void)
{

/*
    printf("Avaliando o ft_isalpha\n");
    int c;
    c = 0;
    while (c < 255)
    {
        printf("O retorno de ft_isalpha para índice: %d (caracter: %c) é: %d\n", c, c, ft_isalpha(c));
        c++;
    }

    printf("Avaliando o ft_isdigit\n");
    int c;
    c = 0;
    while (c < 255)
    {
        printf("O retorno de ft_isdigit para índice: %d (caracter: %c) é: %d\n", c, c, ft_isdigit(c));
        c++;
    }

    printf("Avaliando o ft_isalnum\n");
    int c;

    c = 0;
    while (c < 255)
    {
        printf("O retorno de ft_isalnum para índice: %d (caracter: %c) é: %d\n", c, c, ft_isalnum(c));
        c++;
    }
    printf("Avaliando o ft_isascii\n");
    int c;
    c = 0;
    while (c < 255)
    {
        printf("O retorno de ft_isascii para índice: %d (caracter: %c) é: %d\n", c, c, ft_isascii(c));
        c++;
    }

    printf("Avaliando o ft_isprint\n");
    int c;
    c = 0;
    while (c < 255)
    {
        printf("O retorno de ft_isprint para índice: %d (caracter: %c) é: %d\n", c, c, ft_isprint(c));
        c++;
    }

    printf("Avaliando o ft_strlen\n");

    char *str;
    str = "WYLL BRAYNER";
    printf("O retorno de ft_strlent para: %s é: %zu\n", str, ft_strlen(str));


    printf("Avaliando o ft_memset\n");

    int c;
    char *str;
    c = '@';
    str = "WYLL BRAYNER";
    char str1[60] = "WYLL BRAYNER";
    char *retftchar;
    retftchar = ft_memset(str1, c, 2);
    printf("O retorno de ft_memset para: %s é: %s\n", str, retftchar);

    printf("Avaliando o ft_bezero\n");

    char *str;
    str = "WYLL BRAYNER";
    char str1[60] = "WYLL BRAYNER";
    ft_bzero(str1, 2);
    printf("O retorno de ft_bezero para: %s é: %s\n", str, str1);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[3]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[4]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[5]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[6]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[7]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[8]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[9]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[10]);
    printf("O retorno de ft_bezero para: %s é: %c\n", str, str1[11]);

    printf("Avaliando o ft_memcpy\n");
    char src[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char dest[60];
    size_t len;

    len = 20;
    ft_memcpy(dest, src, len);
    printf("O retorno de ft_memcpy para src: %s e len: %zu é: %s\n", src, len, dest);

    printf("Avaliando o ft_memmove\n");
    char src[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char src2[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char *dest;
    size_t len;

    dest = src+1;
    len = 20;
    ft_memmove(dest, src, len);
    printf("O retorno de ft_memmove para src: %s e len: %zu é: %s\n", src2, len, dest);
  
    printf("Avaliando o ft_strlcpy\n");
    char src1[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char dest1[100];
    size_t len;

    len = ft_strlcpy(dest1, src1, 100);
    printf("O retorno de ft_strlcpy para src: %s | len: %d | dest: %s é: %zu\n", src1, 100, dest1, len);

    char src2[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char dest2[100];

    len = strlcpy(dest2, src2, 100);
    printf("O retorno de    strlcpy para src: %s | len: %d | dest: %s é: %zu\n", src2, 100, dest2, len);

    printf("Avaliando o ft_strlcat\n");
    char src1[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char dest1[100] = "HELLO MUNDOS";
    size_t len;

    len = ft_strlcat(dest1, src1, 10);
    printf("O retorno de ft_strlcat para src: %s | len: %d | dest: %s é: %zu\n", src1, 10, dest1, len);

    char src2[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    char dest2[100] = "HELLO MUNDOS";

    len = strlcat(dest2, src2, 10);
    printf("O retorno de    strlcat para src: %s | len: %d | dest: %s é: %zu\n", src2, 10, dest2, len);

    printf("Avaliando o ft_toupper\n");
    int c;
    c = 0;
    while (c < 128)
    {
        printf("O retorno de ft_toupper para índice: %d (caracter: %c) é: %c\n", c, c, ft_toupper(c));
        c++;
    }
    printf("Avaliando o ft_tolower\n");
    int c;
    c = 0;
    while (c < 128)
    {
        printf("O retorno de ft_tolower para índice: %d (caracter: %c) é: %c\n", c, c, ft_tolower(c));
        c++;
    }

    printf("Avaliando o ft_strchr\n");
    char str[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    int c;

    c = '#';
    printf("O retorno de ft_strchr para string: %s | caracter: %c é: %s\n", str, c, ft_strchr(str, c));
    c = 'a';
    printf("O retorno de ft_strchr para string: %s | caracter: %c é: %s\n", str, c, ft_strchr(str, c));

*/
    printf("Avaliando o ft_strrchr\n");
    char str[60] = "42#% !rio WYLL BRAYNER OLIVEIRA";
    int c;

    c = 'E';
    printf("O retorno de ft_strrchr para string: %s | caracter: %c é: %s\n", str, c, ft_strrchr(str, c));
    c = 'a';
    printf("O retorno de ft_strrchr para string: %s | caracter: %c é: %s\n", str, c, ft_strrchr(str, c));

/*
*/
    return (0);
}
