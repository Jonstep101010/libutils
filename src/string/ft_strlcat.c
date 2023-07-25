/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:40:44 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:44:39 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + ft_strlen(src));
	srclen = ft_strlen(src);
	i = -1;
	while ((++i < srclen) && (i + dstlen < dstsize - 1))
	{
		dst[i + dstlen] = src[i];
	}
	dst[i + dstlen] = '\0';
	return (dstlen + srclen);
}
