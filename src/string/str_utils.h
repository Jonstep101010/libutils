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

#endif