/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:58:35 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/02 20:58:37 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "arr_utils.h"

char	**append_str_arr(const char **arr, const char *s)
{
	size_t	len;
	size_t	i;
	char	**ret;

	if (!s)
		return (NULL);
	len = arr_len((const char **)arr);
	ret = (char **) ft_calloc(len + 2, sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	while (arr && arr[i] && i <= len)
	{
		ret[i] = ft_strdup(arr[i]);
		if (!ret[i])
		{
			arr_free(ret);
			return (NULL);
		}
		i++;
	}
	ret[i] = ft_strdup(s);
	if (!ret[i])
		return (arr_free(ret), NULL);
	return (ret);
}

// function that also frees all input
char	**append_str_arr_free(char **arr, char *s)
{
	size_t	len;
	size_t	i;
	char	**ret;

	if (!s)
		return (NULL);
	len = arr_len((const char **)arr);
	ret = (char **) ft_calloc(len + 2, sizeof(char *));
	if (!ret)
		return (arr_free(arr), NULL);
	i = 0;
	while (arr && arr[i] && i <= len)
	{
		ret[i] = arr[i];
		if (!ret[i])
		{
			arr_free(ret);
			return (NULL);
		}
		i++;
	}
	ret[i] = s;
	if (!ret[i])
		return (arr_free(ret), free(arr), NULL);
	return (free(arr), ret);
}
