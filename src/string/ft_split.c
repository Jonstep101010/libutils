/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:06:22 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/30 20:12:17 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*determine how many strings to store*/
static int	word_counter(char const *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while ((*s != c) && (*s))
				s++;
		}
		else
			s++;
	}
	return (count);
}

/*determine length for each word*/
static int	word_length(char const *s, char c)
{
	int	length;

	length = 0;
	while ((s[length]) && (s[length] != c))
		length++;
	return (length);
}

/*
** @brief split string by delimiter c
** @param s string to be split
** @param c delimiter char
** @return array of new strings - resulting from split,
** \return NULL if allocation fails
** @details allocates memory and returns array of strings (malloc)
** \details array has to end with a NULL pointer; 
** \details handle leading & trailing delimiting characters - no empty substrings
** \details allocated memory freed, no manipulation of input 
** \details (edge: empty input, only delimiter, no delimiter: return array input)
** \details uses helper functions free_mem (free), word_length, word_counter
*/
char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	arr = ft_calloc(sizeof(char *), (word_counter(s, c) + 1));
	if ((!arr) || (!s))
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			arr[i] = ft_substr(s, 0, word_length(s, c));
			if (!arr[i])
			{
				return (arr_free(arr), NULL);
			}
			i++;
			s += word_length(s, c);
		}
		else
			s++;
	}
	return (arr);
}
