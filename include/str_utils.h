/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:42:36 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/27 08:34:42 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_UTILS_H
# define STR_UTILS_H

# include <stddef.h>

long	ft_atol(const char *s);

/**
 * @brief return index of character within string
 * @param s string to search
 * @param c (int) character to find
 * @return index of c in s
 */
size_t	idx_strchr(const char *str, char c);

/**
 * @brief counts occurences of c in s
 *
 * @param s to search
 * @param c to find/count
 * @return int count
 */
int		str_cchr(const char *s, char c);
size_t	secure_strlen(const char *str);

char	*free_first_join(char *s1, const char *s2);
char	*free_second_join(char const *s1, char *s2);
char	*free_both_join(char *s1, char *s2);

char	*append_char_str(char *s, char c);
#endif
