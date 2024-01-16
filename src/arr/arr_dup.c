/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:31:59 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/16 16:20:04 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strdup but for a 2d array
 */
char	**arr_dup(const char **arr)
{
	char	**dup;
	size_t	len;
	int		i;

	if (!arr)
		return (NULL);
	len = arr_len(arr) + 1;
	dup = (char **) ft_calloc(sizeof(char *), len);
	if (!dup)
		return (NULL);
	i = -1;
	while (arr[++i])
		dup[i] = ft_strdup(arr[i]);
	return (dup);
}
