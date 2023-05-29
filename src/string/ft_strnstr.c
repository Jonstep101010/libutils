/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:12:18 by jschwabe          #+#    #+#             */
/*   Updated: 2023/04/02 20:06:52 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** @brief find substring in string
** @param big string to search
** @param little substring to find (null-terminated)
** @param len characters to search
** @return if little is empty - big, if no occurrence - NULL,
** \return otherwise return pointer to first character of first occurrence
** @details characters after '\0' are not searched, result needs to be casted
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!(*little))
		return ((char *) big);
	while ((i < len) && (big[i] != '\0'))
	{
		if (big[i] == little[x])
		{
			while ((big[i + x] == little[x]) && ((i + x) < len))
			{
				x++;
				if (!(little[x]))
					return ((char *) big + i);
			}
		}
		x = 0;
		i++;
	}
	return (0);
}
