/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_strings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:55:26 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/27 08:33:47 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

char	*free_first_join(char *s1, const char *s2)
{
	char	*joined;

	joined = ft_strjoin((const char *)s1, s2);
	free(s1);
	return (joined);
}

char	*free_second_join(char const *s1, char *s2)
{
	char	*ret;

	if (!s1)
		return (free(s2), NULL);
	if (!s2)
		return (NULL);
	ret = ft_strjoin(s1, s2);
	free(s2);
	return (ret);
}

/**
 * @brief requires both strings to be heap allocated
 */
char	*free_both_join(char *s1, char *s2)
{
	char	*joined;

	joined = ft_strjoin((const char *)s1, (const char *)s2);
	free(s1);
	free(s2);
	return (joined);
}
