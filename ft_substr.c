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
    char    *str;
	size_t  len_s;
    size_t  i;

    len_s = (size_t)ft_strlen(s);
    i = 0;
    if (start >= len_s)
        len_s = start;
    str = (char *)malloc(((len_s - start) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (i < len && start < len_s)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);     
}

int main()
{
    const char s[] = "hi all contry !";
    printf("-----> %s\n",ft_substr(s,7,-4));
    printf("-----> %s\n",ft_substr(s,7,-4));

}
