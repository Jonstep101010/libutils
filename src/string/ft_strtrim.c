/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:59:32 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:08:56 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trim;
	size_t	slen;

	if (!s)
		return (NULL);
	if (!set)
		return ((char *)s);
	while ((*s) && ft_strchr(set, *s))
		s++;
	slen = ft_strlen(s);
	while ((slen > 0) && ft_strrchr(set, s[slen - 1]))
		slen--;
	trim = ft_substr(s, 0, slen);
	if (!trim)
		return (NULL);
	return (trim);
}
