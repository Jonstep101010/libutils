/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libutils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:26:52 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/02 21:01:05 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUTILS_H
# define LIBUTILS_H

/* -------------------------------- external -------------------------------- */
# include <stddef.h>
# include "../src/array/arr_utils.h"
# include "../src/string/str_utils.h"

/* -------------------------------------------------------------------------- */
/*                                    array                                   */
/* -------------------------------------------------------------------------- */

# ifndef ARR_UTILS_H

void		arr_free(char **arr);
size_t		arr_len(const char **arr);
char		**arr_dup(const char **arr);
void		print_arr(char **arr);
char		**append_str_arr(const char **arr, const char *s);
char		**append_str_arr_free(char **arr, char *s);
# endif

/* -------------------------------------------------------------------------- */
/*                                   string                                   */
/* -------------------------------------------------------------------------- */

# ifndef STR_UTILS_H

long		ft_atol(const char *s);

int			str_cchr(const char *s, char c);
size_t		idx_strchr(const char *str, char c);

char		*free_first_join(char *s1, const char *s2);
char		*free_both_join(char *s1, char *s2);
# endif

int			ft_isspace(int c);
int			is_quote(int c);

void		free_null(void *p);

#endif
