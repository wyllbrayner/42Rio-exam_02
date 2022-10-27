/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_exam02.h"

static size_t  ft_strlenint(const char *src);

size_t  ft_strlcpy(char *dest, const char *src, size_t len)
{
    size_t i;
    size_t lensrc;

    lensrc = ft_strlenint(src);
    if (len == 0)
        return (lensrc);
    i = 0;
    if ((lensrc + 1) < len)
    {
        while (i < (lensrc + 1))
        {
            dest[i] = src[i];
            i++;
        }
    }
    else
    {
        while (i < (len - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[len - 1] = '\0';
    }
    return (lensrc);
}

static size_t ft_strlenint(const char *src)
{
    size_t len;

    len = 0;
    while (src[len])
    {
        len++;
    }
    return (len);
}