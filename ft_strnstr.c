/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:01:53 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/22 16:01:57 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!*needle || needle == haystack)
		return ((char *)haystack);
	while ((size_t)i < len && *haystack)
	{
		j = 1;
		if (*haystack == needle[0])
		{
			while (haystack[j] == needle[j] && needle[j])
				j++;
			if (needle[j] == '\0' && (j + i) <= len)
				return ((char *)haystack);
		}
		i++;
		haystack++;
	}
	return (NULL);
}
