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

char *ft_strchr(const char *s, int c)
{
    size_t i;
    char *sint;

    sint = (char *)s;
    i = 0;
    while (s[i])
    {
        if ((unsigned char)sint[i] == (unsigned char)c)
            return (&sint[i]);
        i++;
    }
    if ((unsigned char)sint[i] == (unsigned char)c)
        return (&sint[i]);
    else
        return (NULL);
}