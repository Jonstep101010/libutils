/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:01:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:58:57 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*ptrdst;
	char			*ptrsrc;

	ptrdst = (char *) dst;
	ptrsrc = (char *) src;
	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		while (n--)
			*ptrdst++ = *ptrsrc++;
	}
	else
	{
		while (n > 0)
		{
			ptrdst[n - 1] = ptrsrc[n - 1];
			n--;
		}
	}
	return (dst);
}
