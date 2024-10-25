/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:44:49 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/22 19:44:53 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)pointer;
	while ((size_t)i < count)
	{
		ptr[i] = (char )value;
		i++;
	}
	ptr[i] = '\0';
	return (pointer);
}
