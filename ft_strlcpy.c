/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:26:28 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/23 11:26:31 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char* src,const char* dest,size_t size)
{
    char *dest;
    size_t i;

    dest = (char *)dest;
    i = 0;
    if (dest != NULL && src != NULL)
        return (0);
    while (i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return ((size_t)ft_strlen(src));
}