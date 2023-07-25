/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:51:00 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:37:28 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *) str;
	if (*ptr == (char) c)
		return (ptr);
	while (*ptr++)
		if (*ptr == (char) c)
			return (ptr);
	return (0);
}
