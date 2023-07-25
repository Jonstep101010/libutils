/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:28:02 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 15:56:03 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief strlen but for an array
 */
size_t	arr_len(char **arr)
{
	size_t	len;

	len = 0;
	while (arr[len])
		++len;
	return (len);
}
