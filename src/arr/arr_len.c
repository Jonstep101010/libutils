/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:28:02 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/25 19:21:05 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strlen but for an array
 */
size_t	arr_len(const char **arr)
{
	size_t	len;

	len = 0;
	while (arr && arr[len] != NULL)
		len++;
	return (len);
}
