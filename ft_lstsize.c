/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:06:38 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/27 16:06:42 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*new_lst;

	if (!lst)
		return (0);
	counter = 0;
	new_lst = lst;
	while (new_lst != NULL)
	{
		new_lst = new_lst->next;
		counter++;
	}
	return (counter);
}
