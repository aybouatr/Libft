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

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	char	*to2;
	char	*from2;
	size_t	i;

	to2 = (char *)to;
	from2 = (char *)from;
	i = 0;
	while ((to || from) && i < numBytes)
	{
		to2[i] = from2[i];
		i++;
	}
	return (to);
}
