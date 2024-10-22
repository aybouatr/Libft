/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:31:05 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/22 10:31:08 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 unsigned int ft_strlen(const char *s)
 {
    unsigned int counter;

    counter = 0;
    while (s[counter])
        counter++;
    return (counter);
 }
