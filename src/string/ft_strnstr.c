/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:12:18 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 17:05:55 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!(*little))
		return ((char *) big);
	while ((i < len) && (big[i] != '\0'))
	{
		while (big[i] == little[0]
			&& (big[i + x] == little[x])
			&& ((i + x) < len))
			if (++x && !(little[x]))
				return ((char *) big + i);
		i++;
	}
	return (0);
}
