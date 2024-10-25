/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouatr <aybouatr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:48:53 by aybouatr          #+#    #+#             */
/*   Updated: 2024/10/25 10:48:56 by aybouatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

short	count_word(const char *str, char c)
{
	int		i;
	short	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			counter++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (counter);
}

char	*get_word(const char *str, char c)
{
	char	*word;
	int		len_word;
	int		i;

	i = 0;
	len_word = 0;
	while (str[len_word] && str[len_word] != c)
		len_word++;
	word = malloc((len_word + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char c)
{
	short	nbr_word;
	char	**sword;
	int		i;
	int		indexword;

	i = 0;
	indexword = 0;
	nbr_word = count_word(str, c);
	sword = (char **)malloc((nbr_word + 1) * sizeof(char *));
	if (!sword)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			sword[indexword] = get_word(&str[i], c);
			while (str[i] && str[i] != c)
				i++;
		}
		indexword++;
	}
	sword[indexword] = NULL;
	return (sword);
}
