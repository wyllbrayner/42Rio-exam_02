/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_exam02.h"

static size_t   ft_strlenint(const char *str);
size_t  ft_strlcat(char *dest, const char *src, size_t len)
{
    size_t lensrc; 
    size_t lendest;
    size_t i;

    lensrc = ft_strlenint(src);
    lendest = ft_strlenint(dest);
    if (lendest >= len)
        return (lensrc + len);
    else
    {
        i = 0;
        while (i < (len - lendest - 1))
        {
            dest[lendest + i] = src[i];
            i++;
        }
        dest[lendest + i] = '\0';
        return (lendest + lensrc);
    }
}

static size_t   ft_strlenint(const char *str)
{
    size_t len;

    len = 0;
    while (str[len])
    {
        len++;
    }
    return (len);
}