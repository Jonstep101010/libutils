/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:05:04 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/27 09:10:42 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	memsize(void *arr, size_t size)
{
	size_t	len;
	char	*byte_ptr;

	byte_ptr = (char *)arr;
	if (!byte_ptr || !size)
		return (0);
	len = 0;
	while (byte_ptr && *(void **)(byte_ptr + len * size))
		len++;
	return (len);
}
