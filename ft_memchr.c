/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:39:59 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/22 11:40:04 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *buf, int c, size_t count)
{
    unsigned int i;
    char         *str;

    i = 0;
    str = (char *)buf;
    while((size_t)i < count)
    {
        if ((*str) == (char )c)
            return ((void *)str);
        str++;
        i++;
    }
    if(c == 0)
        return ((void *)str);
    return (NULL);
}

int main()
{
    const char str[] = "ABCDEFG";
    const int chars[] = {'D', 'd'};
    for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
    {
        const int c = chars[i];
        const char *ps = memchr(str, c, ft_strlen(str));
        ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
           : printf ("character '%c'(%i) not found\n", c, c);
    }
    return 0;
}