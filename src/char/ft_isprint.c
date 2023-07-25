/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:15:32 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 15:47:57 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief checks if given value is a printable character (32 to 126)
 * @param c value of character to check
 * @return 1 if true, 0 if not
 */
int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}
