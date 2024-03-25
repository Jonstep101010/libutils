/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:42:44 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/04 13:47:26 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARR_UTILS_H
# define ARR_UTILS_H

# include <stddef.h>

void	print_arr(char *const *arr);
char	**arr_dup(char *const *arr);
size_t	arr_len(char *const *arr);
char	**append_str_arr(char *const *arr, const char *s);

void	arr_free(char **arr);

char	**append_str_arr_free(char **arr, char *s);
#endif
