/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:01:08 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/12 21:03:45 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

size_t	secure_strlen(const char *str);

char	*append_char_str(char *s, char c)
{
	char			*res;
	const size_t	len = secure_strlen(s) + 2;
	const char		str[2] = {c, '\0'};

	if (!s)
		return (ft_strdup(str));
	res = (char *)ft_calloc(len, sizeof(char));
	if (!res)
		return (free(s), NULL);
	ft_strlcpy(res, s, len - 1);
	ft_strlcat(res, str, len);
	free(s);
	return (res);
}
