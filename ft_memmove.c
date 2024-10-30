/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:33:05 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/23 09:33:08 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	size_t	i;
	char	*dest;
	char	*src;

	dest = (char *)dest_str;
	src = (char *)src_str;
	i = 0;
	if (src < dest)
	{
		while ((dest || src) && numBytes)
		{
			dest[numBytes - 1] = src[numBytes - 1];
			numBytes--;
		}
	}
	else
	{
		while ((dest || src) && numBytes > i)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest_str);
}
