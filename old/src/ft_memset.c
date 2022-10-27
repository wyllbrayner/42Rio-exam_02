/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_exam02.h"

void    *ft_memset(void *str, int c, size_t len)
{
    size_t          i;
    unsigned char   *str_char;

    i = 0;
    str_char = (unsigned char *)str;
    while (i < len)
        str_char[i++] = (unsigned char)c;
    return (str);
}