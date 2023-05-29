/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:51:00 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:01:49 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
/// @brief search string for character (starts with first)
/// @param str string to search
/// @param c character to find
/// @return pointer to char c (if found), otherwise 0
/// @details includes termination character in search
*/
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
