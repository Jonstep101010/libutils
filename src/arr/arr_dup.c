/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:31:59 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/30 20:37:52 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**arr_dup(char **arr)
{
	char	**dup;
	size_t	len;
	int		i;

	if (!arr)
		return (NULL);
	len = arr_len(arr) + 1;
	dup = malloc(sizeof(*dup) * (len));
	if (!dup)
		return (NULL);
	i = -1;
	while (arr[++i])
		dup[i] = ft_strdup(arr[i]);
	return (dup);
}
