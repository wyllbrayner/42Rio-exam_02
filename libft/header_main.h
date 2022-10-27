/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_main.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 09:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/05/29 17:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_MAIN_H
# define HEADER_MAIN_H

# include <ctype.h>
# include <stdio.h>
# include <string.h>
# include <bsd/string.h>
# include <strings.h>
# include <stddef.h>
# include <stdlib.h>

# define IFC(i, str, retorfun, retftfun) "Para %d (%c), o retorno de %s() é: %d e o retorno de ft_%s() é: %d. Logo, os retornos são iguais.\n", i, i, str, retorfun, str, retftfun
# define ELC(i, str, retorfun, retftfun) "Para %d (%c), o retorno de %s() é: %d e o retorno de ft_%s() é: %d. Logo, os retornos são diferentes.\n", i, i, str, retorfun, str, retftfun

# define IFI(str1, str, retorfun, retftfun) "Para %s, o retorno de %s() é: %zu e o retorno de ft_%s() é: %zu. Logo, os retornos são iguais.\n", str1, str, retorfun, str, retftfun
# define ELI(str1, str, retorfun, retftfun) "Para %s, o retorno de %s() é: %zu e o retorno de ft_%s() é: %zu. Logo, os retornos são diferentes.\n", str1, str, retorfun, str, retftfun

# define TXTMS(str, c, len) "Para str                  : %s | c: %c | len: %zu\n", str, c, len
# define IFMS(str, retorfun, retftfun) "O retorno de %s() é   : %s e \no retorno de ft_%s() é: %s. Logo, os retornos são iguais.\n", str, retorfun, str, retftfun
# define ELMS(str, retorfun, retftfun) "O retorno de %s() é   : %s e \no retorno de ft_%s() é: %s. Logo, os retornos são diferentes.\n", str, retorfun, str, retftfun

# define TXTBZ(str, len) "Para str                  : %s | len: %zu\n", str, len
# define IFBZ(str, retorfun, retftfun) "O retorno de %s() é   : %s e \no retorno de ft_%s() é: %s Logo, os retornos são iguais.\n", str, retorfun, str, retftfun
# define ELBZ(str, retorfun, retftfun) "O retorno de %s() é   : %s e \no retorno de ft_%s() é: %s Logo, os retornos são diferentes.\n", str, retorfun, str, retftfun

# define IFT(i, str, retorfun, retftfun) "Para %d (%c), o retorno de %s() é: %C e o retorno de ft_%s() é: %c. Logo, os retornos são iguais.\n", i, i, str, retorfun, str, retftfun
# define ELT(i, str, retorfun, retftfun) "Para %d (%c), o retorno de %s() é: %c e o retorno de ft_%s() é: %c. Logo, os retornos são diferentes.\n", i, i, str, retorfun, str, retftfun

# define TXTMC(str1, len) "Para ____________________________: %s e len: %zu\n", str1, len
# define TXTRC(str1) "Para ____________________________: %s\n", str1
# define IFRC(str, c, retorfun, retftfun) "Quando %c, o retorno de %s() é: %s e \n       o retorno de ft_%s() é: %s. Logo, os retornos são iguais.\n", c, str, retorfun, str, retftfun
# define ELRC(str, c, retorfun, retftfun) "Quando %c, O retorno de %s() é: %s e \n       o retorno de ft_%s() é: %s. Logo, os retornos são diferentes.\n", c, str, retorfun, str, retftfun

# define IFNC(str, str1, str2, len, retorfun, retftfun) "Para str1: %s, str2: %s e len: %ld, o retorno de %s() é: %d e retorno de ft_%s() é: %d. Logo, os retornos são iguais.\n", str1, str2, len, str, retorfun, str, retftfun
# define ELNC(str, str1, str2, len, retorfun, retftfun) "Para str1: %s, str2: %s e len: %ld, o retorno de %s() é: %d e retorno de ft_%s() é: %d. Logo, os retornos são diferentes.\n", str1, str2, len, str, retorfun, str, retftfun

# define TXTCP(str, len, srcorfun, destorfun, srcftfun, destftfun) "Para len: %zu:\nAntes de    %s(), o valor de src é: %s | dest é: %s | e antes de ft_%s(), o valor de src é: %s | dest é: %s\n", len, str, srcorfun, destftfun, str, srcftfun, destftfun
# define IFCP(str, srcorfun, destorfun, srcftfun, destftfun) "Após        %s(), o valor de src é: %s | dest é: %s | e\napós     ft_%s(), o valor de src é: %s | dest é: %s. Logo, os retornos são iguais.\n", str, srcorfun, destftfun, str, srcftfun, destftfun
# define ELCP(str, srcorfun, destorfun, srcftfun, destftfun) "Após        %s(), o valor de src é: %s | dest é: %s | e\napós     ft_%s(), o valor de src é: %s | dest é: %s. Logo, os retornos são diferentes.\n", str, srcorfun, destftfun, str, srcftfun, destftfun

void	test_function_header(char *str);
void	test_ft_isalpha(char *str);
void	test_ft_isdigit(char *str);
void	test_ft_isalnum(char *str);
void	test_ft_isascii(char *str);
void	test_ft_isprint(char *str);
void	test_ft_strlen(char *str);
void	test_ft_memset(char *str);
void	test_ft_bzero(char *str);
void	test_ft_memcpy(char *str);
void	test_ft_memmove(char *str);
void	test_ft_strlcpy(char *str);
void	test_ft_strlcat(char *str);
void	test_ft_toupper(char *str);
void	test_ft_tolower(char *str);
void	test_ft_strchr(char *str);
void	test_ft_strrchr(char *str);
void	test_ft_strncmp(char *str);
void	test_ft_memchr(char *str);
void	test_ft_memcmp(char *str);
void	test_ft_strnstr(char *str);
void	test_ft_atoi(char *str);
void	test_ft_calloc(char *str);
void	test_ft_strdup(char *str);

void	test_ft_substr(char *str);

void	test_ft_strjoin(char *str);
void	test_ft_strtrim(char *str);

void	test_ft_split(char *str);

void	test_ft_itoa(char *str);
void	test_ft_strmapi(char *str);
void	test_ft_striteri(char *str);
void	test_ft_putchat_fd(char *str);
void    test_ft_putstr_fd(char *str);
void    test_ft_putendl_fd(char *str);
void	test_ft_putnbr_fd(char *str);

#endif
