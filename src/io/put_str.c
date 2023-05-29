/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:39:40 by jschwabe          #+#    #+#             */
/*   Updated: 2023/05/29 16:33:07 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief 
** 
** @param s 
** @return  
*/
int	put_str(char *s)
{
	if (!s)
		s = "(null)";
	if (write(1, s, ft_strlen(s)) < 0)
		return (-1);
	return (ft_strlen(s));
}
