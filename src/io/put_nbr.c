/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:18:49 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/29 16:13:22 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief write a number by specified base and length
** 
** @param n number to write
** @param base base to use for writing
** @param slen length of base
** @return 
*/
int	put_nbr(size_t n, char *base, size_t slen)
{
	int	size;

	size = 0;
	if (n >= slen)
	{
		size += put_nbr(n / slen, base, slen);
		if (size < 0)
			return (-1);
	}
	size += put_char(base[n % slen]);
	return (size);
}
