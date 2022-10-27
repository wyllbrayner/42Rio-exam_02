/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_exam02.h"

void    ft_bzero(void *str, size_t len)
{
    size_t          i;
    unsigned char   *ustr;

    i = 0;
    ustr = (unsigned char *)str;
    while (i < len)
    {
        ustr[i] = (unsigned char)0;
        i++;
    }
}

/*
void    ft_bzero(void *str, size_t len)
{
    ft_memset(str, 0, len);
}
*/