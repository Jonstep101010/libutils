/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:18:49 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:00:40 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
