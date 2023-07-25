/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:34:05 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 15:39:03 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_to_int(char c, int *total)
{
	*total = (*total * 10) + (c - '0');
	return (*total);
}

static int	isprefix(char c)
{
	if ((c == '-') || (c == '+'))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	notation;
	int	total;
	int	i;

	i = 0;
	notation = 1;
	total = 0;
	while (ft_isspace(str[i]))
		i++;
	if (isprefix(str[i]) && isprefix(str[i + 1]))
		return (0);
	if (str[i] == '-')
		notation = -1;
	if (isprefix(str[i]))
		i++;
	while (ft_isdigit(str[i]))
	{
		convert_to_int(str[i], &total);
		i++;
	}
	return (total * notation);
}
