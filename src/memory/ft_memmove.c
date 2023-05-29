/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:01:55 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 19:54:39 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief copies n bytes from one memory location to another
** @param dst pointer to dst memory location
** @param src pointer to src memory location
** @param n bytes to copy
** @return value of dst
** @details possible if pointers overlap (no tmp array due to restrictions)
** \details casts ptrsrc then copies to casted ptrdst
*/
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
