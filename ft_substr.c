/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:53:21 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/23 12:53:25 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *str;
    char *ss;
    size_t i;

    ss = (char *)s;
    i = 0;
    str = malloc((len + 1) * sizeof(char));
    if (!str || ((size_t)(start + len) >= (size_t)ft_strlen(ss)))
        return (NULL);
    while (i < len)
    {
        str[i] = ss[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    const char gg[] = "Bonjour comment ca va?";
    printf("-----> %s",ft_substr(gg, 5, 8));

}