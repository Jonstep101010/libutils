/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:23:16 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/04 13:47:58 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr_utils.h"
#include "./../../libftprintf/ft_printf.h"

void	print_arr(char *const *arr)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = arr_len(arr);
	if (!arr)
		return ;
	while (i <= len)
	{
		ft_printf("[%d]\"%s\"", i, arr[i]);
		i++;
	}
	ft_printf("\n");
}
