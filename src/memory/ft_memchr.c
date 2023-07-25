/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:05:38 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:54:03 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*cast;

	cast = (const unsigned char *) ptr;
	while (n--)
	{
		if (*cast == (unsigned char) c)
			return ((void *) cast);
		cast++;
	}
	return (0);
}
