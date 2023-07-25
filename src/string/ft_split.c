/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 10:06:22 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:19:46 by jschwabe         ###   ########.fr       */
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
				return (arr_free(arr), NULL);
			i++;
			s += word_length(s, c);
		}
		else
			s++;
	}
	return (arr);
}
