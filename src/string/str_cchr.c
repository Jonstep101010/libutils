/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:35:37 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/23 14:37:34 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_cchr(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
