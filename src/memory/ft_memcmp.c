/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:04:38 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:56:33 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	while (n-- > 0)
	{
		ps1 = (const unsigned char *) s1++;
		ps2 = (const unsigned char *) s2++;
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
	}
	return (0);
}
