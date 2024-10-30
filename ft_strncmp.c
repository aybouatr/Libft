/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:36:16 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/22 11:36:20 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t count)
{
	int	i;

	i = 0;
	while (string1[i] == string2[i] && string1[i] && string2[i]
		&& (size_t)i < count)
		i++;
	if ((size_t)i == count)
		return (0);
	return ((unsigned char)string1[i] - (unsigned char)string2[i]);
}
