/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:23:16 by jschwabe          #+#    #+#             */
/*   Updated: 2024/02/20 13:11:59 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr_utils.h"
#include "ft_printf.h"

void	print_arr(char **arr)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = arr_len((const char **)arr);
	if (!arr)
		return ;
	while (i <= len)
	{
		ft_printf("[%d]\"%s\"", i, arr[i]);
		i++;
	}
	ft_printf("\n");
}
