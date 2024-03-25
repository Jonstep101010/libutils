/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:58:35 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/25 13:16:33 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "arr_utils.h"

char	**append_str_arr(char *const *arr, const char *s)
{
	size_t	len;
	size_t	i;
	char	**ret;

	if (!s)
		return (NULL);
	len = arr_len(arr);
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
	const size_t	len = arr_len(arr);
	char			**ret;

	if (!s && !arr)
		return (NULL);
	if (!s)
		return (arr_free(arr), NULL);
	if (!arr)
	{
		ret = append_str_arr(NULL, s);
		free(s);
		return (ret);
	}
	ret = ft_calloc(len + 2, sizeof(char *));
	if (!ret)
		return (arr_free(arr), free(s), NULL);
	ft_memcpy(ret, arr, (len) * sizeof(*arr));
	ret[len] = s;
	free(arr);
	if (!ret[len])
		return (arr_free(ret), NULL);
	return (ret);
}
