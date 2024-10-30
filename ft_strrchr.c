/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:30:08 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/22 10:30:13 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (char )chr)
			ptr = (char *)str;
		str++;
	}
	if (ptr != NULL)
		return (ptr);
	else if ((char )chr == '\0')
		return ((char *)str);
	else
		return (NULL);
}
