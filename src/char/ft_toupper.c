/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:38:44 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 15:46:16 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ascii lowercase to uppercase
 * @param ch value of character
 * @return value (modified or not)
 */
int	ft_toupper(int ch)
{
	if ((ch > 96) && (ch < 123))
		ch = ch - 32;
	return (ch);
}
