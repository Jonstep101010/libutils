/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:47:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:46:47 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	x;

	srclen = ft_strlen(src);
	if (!size)
		return (srclen);
	x = -1;
	while ((src[++x] != '\0') && (x < size - 1))
	{
		dst[x] = src[x];
	}
	if (!src[x] || (x == size - 1))
		dst[x] = 0;
	return (srclen);
}
