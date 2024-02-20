/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   idx_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:44:23 by jschwabe          #+#    #+#             */
/*   Updated: 2024/02/20 14:53:03 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include "str_utils.h"

size_t	idx_strchr(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (i < SIZE_T_MAX && str[i] != c && str[i] != '\0')
		i++;
	return (i);
}
