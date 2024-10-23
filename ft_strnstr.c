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

char   *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
   int i;
   int counter_needle;
   char *hayst;
   char *need;

   i = 0;
   need = (char *)needle;
   hayst = (char *)haystack;
    if (!needle[0])
      return (hayst);
   while ((size_t)i < len)
   {
      counter_needle = 0;
      if (*hayst == need[0])
      {
         while (hayst[counter_needle] == need[counter_needle])
            counter_needle++;
         if (need[counter_needle] == '\0' && (i + counter_needle < len)) 
            return (hayst);
      }
      i++;
      hayst++;
   }
   return (NULL);
}