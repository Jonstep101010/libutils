/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:07:22 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/14 14:36:30 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		return (LONG_MAX);
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

// int main(void)
// {
// 	char *s = "2147483648";
// 	long test = ft_atol(s);
// 	// int	checkint = (int)test;
// 	printf("%ld\n", test);
// 	if (!check_overflow(test))
// 		printf("Found INT overflow\n");
// 	return (0);
// }