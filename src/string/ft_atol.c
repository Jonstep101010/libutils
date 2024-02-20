/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:07:22 by jschwabe          #+#    #+#             */
/*   Updated: 2024/02/20 11:33:01 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <limits.h>
#include "libft.h"

static bool	isprefix(char c)
{
	if (c == '-' || c == '+')
		return (true);
	return (false);
}

long	ft_atol(const char *s)
{
	long	total;
	int		notation;
	int		i;

	total = 0;
	notation = 1;
	i = 0;
	while (s[i] == 32 || (s[i] > 8 && s[i] < 14))
		i++;
	if (isprefix(s[i] && isprefix(s[i + 1])))
		return (0);
	if (isprefix(s[i]))
	{
		if (s[i] == '-')
			notation = -1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		total = total * 10 + (s[i] - 48);
		i++;
	}
	return (total * notation);
}
