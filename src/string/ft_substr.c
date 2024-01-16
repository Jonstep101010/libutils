/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:01:42 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/16 15:58:31 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	len += 1;
	substr = (char *) ft_calloc(len, sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len);
	ft_strlcat(substr, "", len);
	return (substr);
}

/*alternative without calls to ft_strlc...*/
/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	i = -1;
	start -= 1;
	while (++i < len && ++start < slen)
		substr[i] = s[start];
	substr[len] = '\0';
	return (substr);
} */
