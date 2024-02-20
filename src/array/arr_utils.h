#ifndef ARR_UTILS_H
# define ARR_UTILS_H

# include <stddef.h>

size_t	arr_len(const char **arr);

void	arr_free(char **arr);

char	**arr_dup(const char **arr);
void	print_arr(char **arr);

#endif