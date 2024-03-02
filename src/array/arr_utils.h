/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:42:44 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/02 20:59:25 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_UTILS_H
# define ARR_UTILS_H

# include <stddef.h>

size_t	arr_len(const char **arr);

void	arr_free(char **arr);

char	**arr_dup(const char **arr);
void	print_arr(char **arr);

char	**append_str_arr(const char **arr, const char *s);
char	**append_str_arr_free(char **arr, char *s);
#endif
