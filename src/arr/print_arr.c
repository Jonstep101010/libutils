/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 11:23:16 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/26 08:39:01 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
