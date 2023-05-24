/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:11:46 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:01:11 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
/// @brief converts ascii alphabet values to lowercase
/// @param ch value of character
/// @return value, whether modified or not
*/
int	ft_tolower(int ch)
{
	if ((ch > 64) && (ch < 91))
		ch = ch + 32;
	return (ch);
}
