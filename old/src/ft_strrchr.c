/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_exam02.h"

static int ft_strlenint(const char *str);

char *ft_strrchr(char const*s, int c)
{
    int len;
    unsigned char *str;

    len = ft_strlenint(s);
    str = (char *)s;
    while (len >= 0)
    {
        if ((unsigned char)str[len] == (unsigned char)c)
            return (&str[len]);
        len--;
    }
    return (NULL);
}

static int ft_strlenint(const char *str)
{
    int len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}