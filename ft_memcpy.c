/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 08:57:33 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/23 08:57:37 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *to, const void *from, size_t numBytes)
{
    char *to2;
    char *from2;
    int  i;

    to2 = (char *)to;
    from2 = (char *)from;
    i = 0;
    if (!from || numBytes <= 0)
        return (NULL);
    while ((size_t)i < numBytes && from2[i])
    {
        to2[i] = from2[i];
        i++;
    }
    return (to);
}