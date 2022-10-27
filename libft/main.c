/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:23:54 by woliveir          #+#    #+#             */
/*   Updated: 2022/03/29 17:09:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "header_main.h"

int	main(void)
{
	char orfun[34][12] = {"isalpha", "isdigit", "isalnum", "isascii", "isprint", 
						"strlen", "memset", "bzero", "memcpy", "memmove", 
						"strlcpy", "strlcat", "toupper", "tolower", "strchr",
						"strrchr", "strncmp", "memchr", "memcmp", "strnstr", 
						"atoi", "calloc", "strdup", "substr", "strjoin", 
						"strtrim", "split", "itoa", "strmapi", "striteri", 
						"putchar_fd", "putstr_fd", "putendl_fd", "putnbr_fd"};

/*
    test_ft_isalpha(orfun[0]);
	test_ft_isdigit(orfun[1]);
	test_ft_isalnum(orfun[2]);
	test_ft_isascii(orfun[3]);
	test_ft_isprint(orfun[4]);
	test_ft_strlen(orfun[5]);
	test_ft_memset(orfun[6]);
	test_ft_bzero(orfun[7]);
	test_ft_memcpy(orfun[8]);
	test_ft_memmove(orfun[9]);
	test_ft_strlcpy(orfun[10]);
	test_ft_strlcat(orfun[11]);
	test_ft_toupper(orfun[12]);
	test_ft_tolower(orfun[13]);
	test_ft_strchr(orfun[14]);
	test_ft_strrchr(orfun[15]);
	test_ft_memchr(orfun[17]);
	test_ft_memcmp(orfun[18]);
	test_ft_strnstr(orfun[19]);
	test_ft_atoi(orfun[20]);
	test_ft_calloc(orfun[21]);
	test_ft_strdup(orfun[22]);
	test_ft_substr(orfun[23]);
	test_ft_strjoin(orfun[24]);
	test_ft_strtrim(orfun[25]);
	test_ft_split(orfun[26]);
	test_ft_itoa(orfun[27]);
	test_ft_strmapi(orfun[28]);
	test_ft_striteri(orfun[29]);
	test_ft_putchat_fd(orfun[30]);
	test_ft_putstr_fd(orfun[31]);
	test_ft_putendl_fd(orfun[32]);
	test_ft_putnbr_fd(orfun[33]);
*/
	test_ft_strncmp(orfun[16]);
	return (0);
}


void	test_function_header(char *str)
{
	printf("\n\t**** ======= Testando %s ======= ****\n", str);
}

void	test_ft_isalpha(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 128)
	{
		if ((isalpha(i) == ft_isalpha(i)) || ((isalpha(i) >=1) && (ft_isalpha(i) >=1)))
			printf(IFC(i, str, isalpha(i), ft_isalpha(i)));
		else
			printf(ELC(i, str, isalpha(i), ft_isalpha(i)));
		i++;
	}
}

void	test_ft_isdigit(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 128)
	{
		if ((isdigit(i) == ft_isdigit(i)) || ((isdigit(i) >=1) && (ft_isdigit(i) >=1)))
			printf(IFC(i, str, isdigit(i), ft_isdigit(i)));
		else
			printf(ELC(i, str, isdigit(i), ft_isdigit(i)));
		i++;
	}
}

void	test_ft_isalnum(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 128)
	{
		if (isalnum(i) == ft_isalnum(i) || ((isalnum(i) >=1) && (ft_isalnum(i) >=1)))
			printf(IFC(i, str, isalnum(i), ft_isalnum(i)));
		else
			printf(ELC(i, str, isalnum(i), ft_isalnum(i)));
		i++;
	}
}

void	test_ft_isascii(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 128)
	{
		if (isascii(i) == ft_isascii(i) || ((isascii(i) >=1) && (ft_isascii(i) >=1)))
			printf(IFC(i, str, isascii(i), ft_isascii(i)));
		else
			printf(ELC(i, str, isascii(i), ft_isascii(i)));
		i++;
	}
}

void	test_ft_isprint(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 128)
	{
		if (isprint(i) == ft_isprint(i) || ((isprint(i) >=1) && (ft_isprint(i) >=1)))
			printf(IFC(i, str, isprint(i), ft_isprint(i)));
		else
			printf(ELC(i, str, isprint(i), ft_isprint(i)));
		i++;
	}
}

void	test_ft_strlen(char *str)
{
	char	str1[4][50] = {"WYLL BRAYNER", "TexT0_ExT$ANH0)\t", "", "42RIO"};
	size_t	i;

	test_function_header(str);
	i = 0;
	while (i < 4)
	{
		if (strlen(str1[i]) == ft_strlen(str1[i]))
			printf(IFI(str1[i], str, strlen(str1[i]), ft_strlen(str1[i])));
		else
			printf(ELI(str1[i], str, strlen(str1[i]), ft_strlen(str1[i])));
		i++;
	}
}

void	test_ft_memset(char *str)
{
	char	strorfun[2][60] = {"TexT0_ExT$ANH0)", "TexT0_ExT$ANH0)"};
	char	strftfun[2][60] = {"TexT0_ExT$ANH0)", "TexT0_ExT$ANH0)"};
//	char	*retorfun, *retftfun;
	char	*retorfun;
	char	*retftfun;
	int		strchr[3] = {'x', 'J', 0};
	size_t	len[2] = {10, 30};
//	size_t	i, j, k;
	
	test_function_header(str);
/*	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 3)
		{
			k = 0;
			while (k < 2)
			{
				printf(TXTMS(strorfun[i], strchr[j], len[k]));
				retorfun = memset(strorfun[i], strchr[j], len[k]);
				retftfun = ft_memset(strftfun[i], strchr[j], len[k]);
				if (*strorfun[i] == *strftfun[i])
					printf(IFMS(str, retorfun, retftfun));
				else
					printf(ELMS(str, retorfun, retftfun));
				k++;
			}
			j++;
		}
		i++;
	}
*/
	retftfun = ft_memset(strftfun[0], strchr[0], len[0]);
//	retftfun = ft_memset(((void *)0), strchr[0], len[0]);
	printf("ao receber a string: %s | o caract %c para %zu posições, ft_memset retorna: %s\n", strftfun[1], strchr[0], len[0], retftfun);
	retorfun = memset(strorfun[0], strchr[0], len[0]);
//	retorfun = memset(((void *)0), strchr[0], len[0]);
	printf("ao receber a string: %s | o caract %c para %zu posições,    menset retorna: %s\n", strorfun[1], strchr[0], len[0], retorfun);
}	

void	test_ft_bzero(char *str)
{
	char	strorfun[2][60] = {"TexT0_ExT$ANH0)", "TexT0_ExT$ANH0)"};
	char	strftfun[2][60] = {"TexT0_ExT$ANH0)", "TexT0_ExT$ANH0)"};
	size_t	len[1] = {10};
	size_t	i, j;
	
	test_function_header(str);
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 1)
		{
			printf(TXTBZ(strorfun[i], len[j]));
			bzero(strorfun[i], len[j]);
			ft_bzero(strftfun[i], len[j]);
			if (*strorfun[i] == *strftfun[i])
				printf(IFBZ(str, strorfun[i], strftfun[i]));
			else
				printf(ELBZ(str, strorfun[i], strftfun[i]));
			j++;
		}
		i++;
	}
}

void	test_ft_memcpy(char *str)
{
	char	srcorfun[][50] = {"TexT0_ExT$ANH0)"};
	char	srcftfun[][50] = {"TexT0_ExT$ANH0)"};
	char	destorfun[][500] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};
	char	destftfun[][500] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};

	char	*retorfun, *retftfun;
	size_t	i, j;
	size_t	len[3] = {0, 10, 60};

	test_function_header(str);
	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 1)
		{
			printf(TXTCP(str, len[j], srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			retorfun = memcpy(destorfun[i], srcorfun[i], len[j]);
			retftfun = ft_memcpy(destftfun[i], srcftfun[i], len[j]);
			if (*retorfun == *retftfun)
				printf(IFCP(str, srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			else
				printf(ELCP(str, srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			i++;
		}
		j++;
	}
}

void	test_ft_memmove(char *str)
{
	char	strorfun[1][60] = {"SAOPAULOERIODEJANEIRO"};
	char	strftfun[1][60] = {"SAOPAULOERIODEJANEIRO"};
	char	*retorfun, *retftfun;
	size_t	i, j;
	size_t	len[2] = {5, 1};
	
	test_function_header(str);
	i = 0;
	while (i < 2)
	{
		j = 0;
			while (j < 1)
			{
				retorfun = memmove((strorfun[j]+3), strorfun[j], len[i]);
				retftfun = ft_memmove((strftfun[j]+3), strftfun[j], len[i]);
				if (*retorfun == *retftfun)
				{
					printf("VALORES IGUAIS!!\n");
					printf("Após  de ft_memmove e para len: %zu, o valor de str é: %s\n", len[i], strftfun[j]);
					printf("Após  de    memmove e para len: %zu, o valor de str é: %s\n", len[i], strorfun[j]);
				}
				else
				{
					printf("VALORES DIFERENTES!!!!\n");
					printf("Após  de ft_memmove e para len: %zu, o valor de str é: %s\n", len[i], strftfun[j]);
					printf("Após  de    memmove e para len: %zu, o valor de str é: %s\n", len[i], strorfun[j]);
				}
				j++;
			}
		i++;
	}
}

void	test_ft_strlcpy(char *str)
{
	char	srcorfun[][50] = {"TexT0_ExT$ANH0)"};
	char	srcftfun[][50] = {"TexT0_ExT$ANH0)"};
	char	destorfun[][500] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};
	char	destftfun[][500] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};
	size_t	retorfun, retftfun, i, j;
	size_t	len[3] = {0, 10, 60};

	test_function_header(str);
	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 1)
		{
			printf(TXTCP(str, len[j], srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			retorfun = strlcpy(destorfun[i], srcorfun[i], len[j]);
			retftfun = ft_strlcpy(destftfun[i], srcftfun[i], len[j]);
			if (retorfun == retftfun)
				printf(IFCP(str, srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			else
				printf(ELCP(str, srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			i++;
		}
		j++;
	}

}

void	test_ft_strlcat(char *str)
{

//	char		strftdest[100] = {"CARNEIRO"};
//	const char	strftsrc[] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};
//	size_t		len, retftfun;
//	len = 20;
	test_function_header(str);

//	printf("ft\n");
//	printf("O valor de dest: %s | src: %s | len: %zu antes da chamada à ft_strlcpy\n", strftdest, strftsrc, len);
//	retftfun = ft_strlcat(strftdest, strftsrc, len);
//	printf("O valor de dest: %s | src: %s | len: %zu e o valor da ft_strlcpy é      : %zu\n", strftdest, strftsrc, len, retftfun);




	char	*src = "aaa";
	char	dst1[20];
	char	dst2[20];
	int		ret1;
	int		ret2;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));


	printf("Antes de    strlcat, src: %s, dest1: %s\n", src, dst1);
	strlcat(dst1, src, 20);
	strlcat(dst1, src, 20);
	ret1 = strlcat(dst1, src, 20);

	printf("Antes de ft_strlcat, src: %s, dest2: %s\n", src, dst2);
	ft_strlcat(dst2, src, 20);
	ft_strlcat(dst2, src, 20);
	ret2 = ft_strlcat(dst2, src, 20);
	if (ret1 == ret2)
	{
		printf("retor: %d | retft: %d\n", ret1, ret2);
		printf("Após  de    strlcat, src: %s, dest1: %s\n", src, dst1);
		printf("Após  de ft_strlcat, src: %s, dest2: %s\n", src, dst2);
		printf("Retornos iguais\n");
	}
	else
	{
		printf("retor: %d | retft: %d\n", ret1, ret2);
		printf("Após  de    strlcat, src: %s, dest1: %s\n", src, dst1);
		printf("Após  de ft_strlcat, src: %s, dest2: %s\n", src, dst2);
		printf("Retornos diferentes\n");
	}

/*
///////Testar na 42!!!!!

	char	srcorfun[][50] = {"TexT0_ExT$ANH0)"};
	char	srcftfun[][50] = {"TexT0_ExT$ANH0)"};
	char	destorfun[][500] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};
	char	destftfun[][500] = {"WYLLBRAYNEROLIVEIRACARNEIRO"};
	size_t	retorfun, retftfun, i, j;
	size_t	len[3] = {0, 10, 60};

	test_function_header(str);
	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 1)
		{
			printf(TXTCP(str, len[j], srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			retorfun = strlcat(destorfun[i], srcorfun[i], len[j]);
			retftfun = ft_strlcat(destftfun[i], srcftfun[i], len[j]);
			if (retorfun == retftfun)
				printf(IFCP(str, srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			else
				printf(ELCP(str, srcorfun[i], destorfun[i], srcftfun[i], destftfun[i]));
			i++;
		}
		j++;
	}
*/
}

void	test_ft_toupper(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 128)
	{
		if (toupper(i) == ft_toupper(i) || ((toupper(i) >=1) && (ft_toupper(i) >=1)))
			printf(IFT(i, str, toupper(i), ft_toupper(i)));
		else
			printf(ELT(i, str, toupper(i), ft_toupper(i)));
		i++;
	}
}

void	test_ft_tolower(char *str)
{
	int	i;

	i = 0;
	test_function_header(str);
	while (i < 127)
	{
		if (tolower(i) == ft_tolower(i) || ((tolower(i) >=1) && (ft_tolower(i) >=1)))
			printf(IFT(i, str, tolower(i), ft_tolower(i)));
		else
			printf(ELT(i, str, tolower(i), ft_tolower(i)));
		i++;
	}
}

void	test_ft_strchr(char *str)
{
	char	strorfun[1][60] = {"TexT0_ExT$ANH0)"};
	char	strftfun[1][60] = {"TexT0_ExT$ANH0)"};
	char	*retftfun, *retorfun;
	int	chr[5] = {'T', 't', '1', 0, '_'};
	size_t	i, j;

	i = 0;
	test_function_header(str);
	while (i < 1)
	{
		printf(TXTRC(strorfun[i]));
		j = 0;
		while (j < 5)
		{
			retorfun = strchr(strorfun[i], chr[j]);
			retftfun = ft_strchr(strftfun[i], chr[j]);
			if (*strorfun[i] == *strftfun[i])
				printf(IFRC(str, chr[j], retorfun, retftfun));
			else
				printf(ELRC(str, chr[j], retorfun, retftfun));
			j++;
		}
		i++;
	}
}

void	test_ft_strrchr(char *str)
{
	char	strorfun[2][60] = {"abbbbbbbb", "TexT1_ExT$ANH0)"};
	char	strftfun[2][60] = {"abbbbbbbb", "TexT1_ExT$ANH0)"};
	char	*retftfun, *retorfun;
	int	chr[6] = {'a', 'T', 't', '1', 0, '_'};
	size_t	i, j;

	i = 0;
	test_function_header(str);
	while (i < 2)
	{
		printf(TXTRC(strorfun[i]));
		j = 0;
		while (j < 6)
		{
			retorfun = strrchr(strorfun[i], chr[j]);
			retftfun = ft_strrchr(strftfun[i], chr[j]);
			if (*strorfun[i] == *strftfun[i])
				printf(IFRC(str, chr[j], retorfun, retftfun));
			else
				printf(ELRC(str, chr[j], retorfun, retftfun));
			j++;
		}
		i++;
	}
}

void	test_ft_strncmp(char *str)
{
	char	str1[7][60] = {"abcdef", "TexT0_ExT$ANH0)", "TexT0_ExT$aNH0)", "TexT0_ExT$ANH0)", "TexT1_ExT$ANH0)", "TexT0_ExT$ANH0)", "TexT0_EXT$ANH"};
	char	str2[7][60] = {"abc\0defghijklmnop","TexT0_ExT$ANH0)", "TexT0_ExT$ANH0)", "TexT0_ExT$aNH0)", "TexT9_ExT$ANH0)", "TexT0_EXT$ANH", "TexT9_ExT$ANH0)"};
	int		retftfun, retorfun;
	size_t	i, j;
	size_t	len[3] = {6, 5, 50};

	test_function_header(str);
	j = 0;
	while (j < 3)
	{
		i = 0;
		while (i < 7)
		{
			retorfun = strncmp(str1[i], str2[i], len[j]);
			retftfun = ft_strncmp(str1[i], str2[i], len[j]);
			if (retorfun == retftfun)
				printf(IFNC(str, str1[i], str2[i], len[j], retorfun, retftfun));
			else
				printf(ELNC(str, str1[i], str2[i], len[j], retorfun, retftfun));
			i++;
		}
		j++;
	}
			retorfun = strncmp((void *)0, str2[i], len[j]);
			retftfun = ft_strncmp((void *)0, str2[i], len[j]);
			if (retorfun == retftfun)
				printf(IFNC(str, str1[i], str2[i], len[j], retorfun, retftfun));
			else
				printf(ELNC(str, str1[i], str2[i], len[j], retorfun, retftfun));


}

void	test_ft_memchr(char *str)
{
	test_function_header(str);
	char	*retftfun, *retorfun;
/*
	char	strorfun[1][60] = {"TexT0_ExT$A1NH0)"};
	char	strftfun[1][60] = {"TexT0_ExT$A1NH0)"};
	int		chr[5] = {'T', 't', '1', 0, '_'};
	size_t	len[] = {3, 20};
	size_t	i, j, k;

	i = 0;
	while (i < 1)
	{
		k = 0;
		while (k < 2)
		{
		printf(TXTMC(strorfun[i], len[k]));
			j = 0;
			while (j < 5)
			{
				retorfun = memchr(strorfun[i], chr[j], len[k]);
				retftfun = ft_memchr(strftfun[i], chr[j], len[k]);
				if (*strorfun[i] == *strftfun[i])
					printf(IFRC(str, chr[j], retorfun, retftfun));
				else
					printf(ELRC(str, chr[j], retorfun, retftfun));
				j++;
			}
			k++;
		}
		i++;
	}
*/
	retorfun = memchr("RIOD EJANEIRO", 'x', 15);
	printf("Para str: RIOD EJANEIRO | c: x e len : 15    memchr retorna: %s\n", retorfun);
	retftfun = ft_memchr("RIOD EJANEIRO", 'x', 15);
	printf("Para str: RIOD EJANEIRO | c: x e len : 15 ft_memchr retorna: %s\n", retftfun);
	/*
		retftfun = ft_memchr("RIODEJANEIRO", 'D', 0);
		if (*retorfun == *retftfun)
			printf(IFRC(str, 'D', retorfun, retftfun));
		else
			printf(ELRC(str, 'D', retorfun, retftfun));
	*/
}

void	test_ft_memcmp(char *str)
{
	char	str1[6][60] = {"TexT0_ExT$ANH0)", "TexT0_ExT$aNH0)", "TexT0_ExT$ANH0)", "TexT1_ExT$ANH0)", "TexT0_ExT$ANH0)", "TexT0_EXT$ANH"};
	char	str2[6][60] = {"TexT0_ExT$ANH0)", "TexT0_ExT$ANH0)", "TexT0_ExT$aNH0)", "TexT9_ExT$ANH0)", "TexT0_EXT$ANH", "TexT9_ExT$ANH0)"};
	int		retftfun, retorfun;
	size_t	i, j;
	size_t	len[2] = {50, 6};

	test_function_header(str);
	j = 0;
	while (j < 2)
	{
		i = 0;
		while (i < 6)
		{
			retorfun = memcmp(str1[i], str2[i], len[j]);
			retftfun = ft_memcmp(str1[i], str2[i], len[j]);
			if (retorfun == retftfun)
				printf(IFNC(str, str1[i], str2[i], len[j], retorfun, retftfun));
			else
				printf(ELNC(str, str1[i], str2[i], len[j], retorfun, retftfun));
			i++;
		}
		j++;
	}
}

void	test_ft_strnstr(char *str)
{
/*
	char to_find[2][60] = {"RIODEJANEIRO", "DEJ"};
	char place[4][60] = {"DEJ", "RIODEJANEIRO", "1", "BOLA"};
	char *retorfun,*retftfun;
	size_t len[4] = {3, 0, 7, 20};
	size_t i, j, k;

	test_function_header(str);
	k = 0;
	while (k < 4)
	{
		i = 0;
		while (i < 2)
		{
			j = 0;
			while (j < 4)
			{
				retorfun = strnstr(place[j], to_find[i], len[k]);
				retftfun = ft_strnstr(place[j], to_find[i], len[k]);
				if (*retorfun == *retftfun)
					printf("O retorno de strnstr() é: %s e ft_strnstr() é: %s. Logo, os retornos são iguais\n", retorfun, retftfun);
				else
					printf("O retorno de strnstr() é: %s e ft_strnstr() é: %s. Logo, os retornos são diferentes\n", retorfun, retftfun);
				j++;
			}
			i++;
		}
		k++;
	}
*/


//	char to_find[2][60] = {"caso"};
//	char placer[1][60] = {"casacaso"};
	char to_find[4][30] = {"stringg", "FF", "AAAAAAAAA", "see FF your FF now FF"};
	char placer[4][30] = {"Usar string na variável", "see FF your FF now FF", "BBBBBBB", "FF"};
	char *retftfun, *retorfun;
//	size_t len[2] = {-10, 4};
	size_t i;

	i = 0;
	test_function_header(str);
	while (i < 4)
	{
		retftfun = ft_strnstr(placer[i], to_find[i], 4);
		retorfun = strnstr(placer[i], to_find[i], 4);
		printf("To find: %s | em placer: %s, o valor retornado por ft_strnstr() é: %s\n", to_find[i], placer[i], retftfun);
		printf("To find: %s | em placer: %s, o valor retornado por    strnstr() é: %s\n", to_find[i], placer[i], retorfun);
		i++;
	}
}

void	test_ft_atoi(char *str)
{
	char	numchar[9][60] = {"a-1 2", "--1 2", "\t -42", "\f --2 1 ", " -\t12", " --21 ", "    -1 2", "     -1 2 ", " - 12"};
	int		i, retorfun, retftfun;
	
	test_function_header(str);
	i = 0;
	while (i < 9)
	{
		retorfun = atoi(numchar[i]);
		retftfun = ft_atoi(numchar[i]);
		if (retorfun == retftfun)
			printf("A string de entrada é : %s.\nO retorno da    atoi é: %d\nO retorno da ft_atoi é: %d. Logo, os retornos são iguais.\n", numchar[i], retorfun, retftfun);
		else
			printf("A string de entrada é : %s.\nO retorno da    atoi é: %d\nO retorno da ft_toi é: %d. Logo, os retornos são diferentes.\n", numchar[i], retftfun, retftfun);
		i++;
	}
}

void	test_ft_calloc(char *str)
{
	char	*retorfun, *retftfun;
	size_t	qtd1;
	size_t	len1;
	
	test_function_header(str);
	qtd1 = 2;
	len1 = 0;
	retorfun = (char *)calloc(qtd1, len1);
	retftfun = (char *)ft_calloc(qtd1, len1);
	if (retorfun)
	{	
		retorfun[0] = '4';
		retorfun[1] = '2';
		printf("O valor de retorfun[0] é %c e o valor de retorfun[1] é: %c\n", retorfun[0], retorfun[1]);
	}
	else
		printf("calloc retornou nulo\n");
	if (retftfun)
	{	
		retftfun[0] = '4';
		retftfun[1] = '2';
		printf("O valor de retftfun[0] é %c e o valor de retftfun[1] é: %c\n", retftfun[0], retftfun[1]);
	}
	else
		printf("ft_calloc retornou nulo\n");
	if (retorfun && retftfun)
		printf("Os retornos das funções %s() e ft_%s() são iguais\n", str, str);
	else
		printf("Os retornos das funções %s() e de ft_%s() são diferentes\n", str, str);
	free(retorfun);
	free(retftfun);
}

void	test_ft_strdup(char *str)
{
	const char	*str1 = "42RIO";
	char 		*str2;
	char		*str3;
	test_function_header(str);
	str2 = strdup(str1);
	str3 = ft_strdup(str1);
	printf("função original: O valor de str1 é: %s e str2 é: %s \n", str1, str2);
	printf("função ft:     : O valor de str1 é: %s e str3 é: %s \n", str1, str3);
	free(str2);
	free(str3);
}

void	test_ft_substr(char *str)
{
	char 			s[1][30] = {"tripouille"};
	char		   	*retftfun;
//	char			*retorfun;
	unsigned int	start;
	size_t			len;

	test_function_header(str);
	start = 100;
	len = 1;
//	retorfun = substr(s[0], start, len);
	retftfun = ft_substr(s[0], start, len);
//	printf("O valor retornado pela    substr é: %s\n", retorfun);
	printf("O valor retornado pela ft_substr é: %s\n", retftfun);
}

void	test_ft_strjoin(char *str)
{
	const char *s1 = {"WYLL "};
	const char *s2 = {"BRAYNER"};
	test_function_header(str);
	printf("Para s1: %s | s2: %s ft_strjoin retorna: %s\n", s1, s2, ft_strjoin(s1, s2));
	printf("Para s1: %p | s2: %p ft_strjoin retorna: %s\n", NULL, NULL, ft_strjoin(NULL, NULL));
}

void	test_ft_strtrim(char *str)
{

	const char *s1 = {"  WWYLLBRAYNERWW W"};
	const char *s2 = {" W"};
	test_function_header(str);
	printf("Para s1: %s | set: %s ft_strtrim retorna: %s\n", s1, s2, ft_strtrim(s1, s2));
}

void	test_ft_split(char *str)
{
	const char *s = {"ab   vabo  ca WYLLBRAY             NE R j orr o            "};
//	const char *s = {"      split       this for   me  !       "};
	char		c = ' ';
//	char 		c = ' ';

	char		**tab;
	int			i = 0;
	test_function_header(str);
	tab = ft_split(s, c);
	printf("Para a str: %s, com o separador: %c, ft_plit retorna\n", s, c);
	while (i < 10)
	{
		printf("%s no índice: %i\n", tab[i], i);
		i++;
	}
	free(tab);
}

void	test_ft_itoa(char *str)
{
	test_function_header(str);
	printf("Para s: %li ft_itoa retorna: %s\n", INT_MIN, ft_itoa(INT_MIN));

	printf("Para s: %i ft_itoa retorna: %s\n", INT_MAX, ft_itoa(INT_MAX));
	printf("Para s: %i ft_itoa retorna: %s\n", 0, ft_itoa(0));
}

char f(unsigned int i, char c)
{
	if (i < 10)
		c = c + 32;
	return (c);
}

void	test_ft_strmapi(char *str)
{
	char	s[] = "ABC";
	test_function_header(str);
	char	*retftfun;
	printf("Para s: %s e f, ft_strmapi apresenta:\n", s);
	retftfun = ft_strmapi(s, *f);
	ft_putendl_fd(retftfun, 1);
}

void	ft_add_index(unsigned int index, char *s)
{
	ft_putchar_fd(*s, 1);
	ft_putchar_fd('[', 1);
	ft_putnbr_fd(index, 1);
	ft_putchar_fd(']', 1);
	ft_putchar_fd('\n', 1);
}
void g(unsigned int i, char *c)
{
	if (i < 10)
		c = c + 32;
}

void    test_ft_striteri(char *str)
{
	char	s = 'W';
	test_function_header(str);
	printf("Valor de s: %c antes de ft_striteri\n", s);
	ft_striteri(&s, ft_add_index);
//	ft_striteri(&s, g);
	printf("Valor de s: %c após  de ft_striteri\n", s);
}

void	test_ft_putchat_fd(char *str)
{
	int		c = 90;
	int		fd[2] = {-2, 2};
	size_t	i = 0;
	test_function_header(str);
	while(i < 2)
	{
		printf("Para c: %c e fd: %i, ft_putchar_fd apresenta:\n", c, fd[i]);
		ft_putchar_fd(c, fd[i]);
		printf("\n");
		i++;
	}
}

void    test_ft_putstr_fd(char *str)
{
	char	s[] = "WYLLBRAYNER";
	int		fd[3] = {-2, 2, 2147483647};
	size_t	i = 0;
	test_function_header(str);
	while(i < 3)
	{
		printf("Para c: %s e fd: %i, ft_putstr_fd apresenta:\n", s, fd[i]);
		ft_putstr_fd(s, fd[i]);
		printf("\n");
		i++;
	}
}

void    test_ft_putendl_fd(char *str)
{
	char	s[] = "WYLLBRAYNER";
	int		fd[3] = {-2, 2, 2147483647};
	size_t	i = 0;
	test_function_header(str);
	while(i < 3)
	{
		printf("Para c: %s e fd: %i, ft_putendl_fd apresenta:\n", s, fd[i]);
		ft_putendl_fd(s, fd[i]);
		i++;
	}
}

void	test_ft_putnbr_fd(char *str)
{
	int nbr[3] = {-100, INT_MAX, INT_MIN};
	int fd = 1;
	int i = 0;
	test_function_header(str);
	while(i < 3)
	{
		printf("Para nbr: %i e fd: %i, ft_putnbr_fd apresenta\n", nbr[i], fd);
		ft_putnbr_fd(nbr[i], fd);
		ft_putchar_fd('\n', fd);
		i++;
	}
}
