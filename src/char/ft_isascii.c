/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:38:53 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 15:50:48 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief checks if value is ascii character
 * @param c value of character
 * @return 1 if ascii, 0 if not
 * @details includes '\0', ascii 0 to 127
 */
int	ft_isascii(int c)
{
	if ((c >= 0) && (c < 128))
		return (1);
	return (0);
}
