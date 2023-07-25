/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strn_chr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:44:23 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:05:14 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return index of character within string
 * @param s string to search
 * @param c (int) character to find
 * @return index of c in s
 */
int	strn_chr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*(s++) == (char) c)
			return (i);
		i++;
	}
	return (-1);
}
