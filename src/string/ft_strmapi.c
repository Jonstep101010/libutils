/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:10:59 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:49:15 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*cpy;
	unsigned int	i;
	size_t			slen;

	slen = ft_strlen(s);
	if ((!s) || (!f))
		return (NULL);
	cpy = malloc(sizeof(char) * slen + 1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, slen + 1);
	i = -1;
	while (++i < slen)
	{
		cpy[i] = f(i, cpy[i]);
	}
	return (cpy);
}
