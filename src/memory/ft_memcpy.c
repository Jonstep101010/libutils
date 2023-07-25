/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:36:31 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:57:26 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s = src;

	d = dst;
	if (!d && !s)
		return (0);
	while (n-- && (d || s))
		*d++ = *s++;
	return (dst);
}
