/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:23:16 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/16 13:09:51 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_arr(const char **arr)
{
	int	i;

	i = 0;
	if ((!arr) || (!*arr))
		return ;
	while (arr[i])
	{
		ft_printf("[%d]\"%s\"", i, arr[i]);
		i++;
	}
	ft_printf("\n");
}
