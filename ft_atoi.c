/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:59:58 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/21 18:00:07 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	stock;

	sign = 1;
	stock = 0;
	while ((*str >= 9 && *str <= 13) || (32 == *str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		stock = (stock * 10) + (*str - '0');
		str++;
	}
	stock = stock * sign;
	if (stock >= 9223372036854775807 || - 9223372036854775807 > stock)
		return (-1);
	return ((int )stock);
}
