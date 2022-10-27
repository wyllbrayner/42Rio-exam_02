/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woliveir                                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:03:59 by woliveir          #+#    #+#             */
/*   Updated: 2022/09/02 12:52:55 by woliveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int  ft_isupper(int c);
static int  ft_islower(int c);

int ft_isalpha(int c)
{
    if (ft_isupper(c) || ft_islower(c))
        return (1);
    return (0);
}

static int  ft_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0); 
}

static int  ft_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0); 
}