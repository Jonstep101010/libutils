/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libutils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:26:52 by jschwabe          #+#    #+#             */
/*   Updated: 2024/02/20 14:30:26 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUTILS_H
# define LIBUTILS_H

/* -------------------------------- external -------------------------------- */
# include <stddef.h>

/* -------------------------------------------------------------------------- */
/*                                    array                                   */
/* -------------------------------------------------------------------------- */
# include "../src/array/arr_utils.h"
void		arr_free(char **arr);
size_t		arr_len(const char **arr);
char		**arr_dup(const char **arr);
void		print_arr(char **arr);

/* -------------------------------------------------------------------------- */
/*                                   string                                   */
/* -------------------------------------------------------------------------- */
# include "../src/string/str_utils.h"

long		ft_atol(const char *s);

int			str_cchr(const char *s, char c);
size_t		idx_strchr(const char *str, char c);

#endif
