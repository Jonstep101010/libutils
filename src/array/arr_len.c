/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:28:02 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/04 13:47:09 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief strlen but for an array
 * const void * const *arr
 */
size_t	arr_len(char *const *arr)
{
	size_t	len;

	len = 0;
	while (arr && arr[len] != NULL)
		len++;
	return (len);
}
