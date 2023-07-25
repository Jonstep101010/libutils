/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 20:24:13 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:39:03 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	size;

	size = ft_strlen(s) + 1;
	copy = malloc(size);
	if (!copy)
		return (0);
	ft_memcpy(copy, s, size);
	return (copy);
}

/*alternative without ft_memcpy*/
/* char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	size += 1;
	copy = malloc(size);
	if (!copy)
		return (0);
	while (size-- && (copy))
		copy[size] = s[size];
	return (copy);
} */
