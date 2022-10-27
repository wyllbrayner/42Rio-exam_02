/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_exam02.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char   *udest;
    unsigned char   *usrc;
    size_t          i;

    if (dest == NULL && src == NULL && len > 0)
        return (NULL);
    udest = (unsigned char *)dest;    
    usrc = (unsigned char *)src;
    if (src < dest)
    {
        while (len > 0)
        {
            udest[(len - 1)] = usrc[(len - 1)];
            len--;
        }
    }
    else
    {
        i = 0;
        while(i < len)
        {
            udest[i] = usrc[i];
            i++;
        }
    }
    return (dest);
}