/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:39:54 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 15:59:15 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief write a character to stdout
 * @param c character to write
 * @return 1, -1 on write failure
 */
int	put_char(char c)
{
	return (write(1, &c, 1));
}
