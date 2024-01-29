/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:26:52 by jschwabe          #+#    #+#             */
/*   Updated: 2024/01/26 08:36:30 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <stdint.h>
# include <stddef.h>
# include <unistd.h>
# include "ft_printf.h"
# include "get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isspace(char c);

/**
 * @brief strlen
 * @param str target
 * @return length (including terminating '\0')
 */
size_t		ft_strlen(const char *str);

/*
** @brief sets first n bytes of str to value c (unsigned int)
** @param str location to modify
** @param c value to set n bytes to
** @param n bytes to set to value c
** @return str
*/
void		*ft_memset(void *str, int c, size_t n);

/**
 * @brief places n zero-valued bytes in memory area (*s)
 * @param s pointer to memory
 * @param n number of bytes to place
 * @details works without typecasting
 */
void		ft_bzero(void *s, size_t n);

/**
 * @brief copies data from src pointer to dst pointer (cast)
 * @param dst pointer  to array
 * @param src pointer to source
 * @param n bytes to copy
 * @return success: pointer to dst, otherwise NULL
 */
void		*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief copies n bytes from one memory location to another
 * @param dst pointer to dst memory location
 * @param src pointer to src memory location
 * @param n bytes to copy
 * @return value of dst
 * @details possible if pointers overlap (no tmp array due to restrictions)
 * \details casts ptrsrc then copies to casted ptrdst
 */
void		*ft_memmove(void *dst, const void *src, size_t n);

/**
 * @brief copy src to dst of size
 * @param dst pointer to string
 * @param src pointer to string
 * @param size size of destination buffer
 * @return length of src, if return > size, terminate dst, unless empty
 * @details at most copy size-1 (prevent overflow)
 */
size_t		ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief concatenates two strings, terminate (if free byte in dst)
 * @param dst pointer to string
 * @param src pointer to string
 * @param dstsize size of destination buffer
 * @return initial length of dst + lenght of src (without termination)
 * @details both src and dst need to be null-terminated, src < dstsize - 1
 */
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);

int			ft_toupper(int ch);
int			ft_tolower(int ch);

/**
 * @brief search string for character (starts with first)
 * @param str string to search
 * @param c character to find
 * @return pointer to char c (if found), otherwise 0
 * @details includes termination character in search
 */
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);

/**
 * @brief compare strings
 * @param s1 first string to compare
 * @param s2 second string to compare
 * @param n maximum characters to compare
 * @return s1 less, greater or equal s2
 * @details compares at most the first n bytes of s1 and s2
 */
int			ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief scan initial n bytes of memory for char c
 * @param ptr memory location to be scanned
 * @param c character to search for
 * @param n bytesize
 * @details casts to unsigned char for comparison with c
 * @return pointer to matching byte, NULL if not found
 */
void		*ft_memchr(const void *ptr, int c, size_t n);

/**
 * @brief compares the values of two pointers
 * @param s1 first pointer to compare
 * @param s2 second pointer to compare
 * @param n bytes to compare
 * @details compares elements from two arrays (unsigned char)
 * @details beginning at adresses s1 and s2 (size n)
 * @return difference (equal: 0) ? (diff: s1 to s2)
 */
int			ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief find substring in string
 * @param big string to search
 * @param little substring to find (null-terminated)
 * @param len characters to search
 * @return if little is empty - big, if no occurrence - NULL,
 * \return otherwise return pointer to first character of first occurrence
 * @details characters after '\0' are not searched, result needs to be casted
 */
char		*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief String to integer
 * @param str ascii
 * @return int * notation (- if negative)
 * @details single prefix (+ or -), skips whitespace
 */
int			ft_atoi(const char *str);
/** @brief atoi using long */
long		ft_atol(const char *s);

/**
 * @brief allocates and points to memory
 * @param nitems number of elements to allocate
 * @param size size of elements
 * @return pointer to allocated memory, NULL if failure (1, for byte possible)
 * @details ptr for memory space, iterating through and initializing,
 * \details allocate using malloc, guard for ptr == 0
 */
void		*ft_calloc(size_t nitems, size_t size);

/**
 * @brief duplicate a string (malloc)
 * @param s source to copy
 * @return copied string (terminated)
 */
char		*ft_strdup(const char *s);

/**
 * @brief return substring for string (malloc)
 * @param s string from which to create substring
 * @param start start index of substring in s
 * @param len maximum length of substring
 * @return (terminated) substring, NULL if allocation fails
 * @details check if empty & slen
 * \details guard against start > slen ("")
 * \details if len > size - index: malloc(size - index + 1)
 */
char		*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief allocates and returns new string, concatenation s1 and s2
 * @param s1 prefix string
 * @param s2 suffix string
 * @return new string, NULL if allocation fails
 */
char		*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief copies string with set removed from beginning and end
 * @details checks for empty strings, search from beginning and end
 * @test Example: set = "He", s = "HeHello, HeyHe" trim = "llo, Hey"
 * @param s string to trim
 * @param set set of characters to trim
 * @return trimmed string, NULL if allocation fails
 */
char		*ft_strtrim(char const *s1, char const *set);

/**
 * @brief split string by delimiter c
 * @param s string to be split
 * @param c delimiter char
 * @return array of new strings - resulting from split,
 * \return NULL if allocation fails, input: empty, only/no del
 * array NULL terminated
 * handle leading & trailing delimiting characters - no empty substrings
 */
char		**ft_split(char const *s, char c);

/**
 * @brief convert int to char string
 * @param n int to convert
 * @return pointer to char string, NULL if allocation fails
*/
char		*ft_itoa(int n);

/**
 * @brief iterate function over characters of string (malloc)
 * @param s string to iterate on
 * @param f function to apply to each char
 * @return string created from application of f, NULL if allocation fails
 */
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

//bonus functions
t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int			put_char(char c);
/**
 * @brief write a string to stdout
 * @param s string to write
 * @return int write size
 */
int			put_str(char *s);
int			strn_chr(const char *s, int c);

/**
 * @brief write a number by specified base and length
 * @param n number to write
 * @param base base to use
 * @param slen length of base
 * @return size of write
 */
int			put_nbr(size_t n, char *base, size_t slen);
void		arr_free(char **arr);
size_t		arr_len(const char **arr);
char		**arr_dup(const char **arr);
void		print_arr(char **arr);

/**
 * @brief free the memory, set it to NULL
 * 
 * @param tofree pointer to freeable memory
 */
void		free_null(void *tofree);

/**
 * @brief counts occurences of c in s
 *
 * @param s to search
 * @param c to find/count
 * @return int count
 */
int			str_cchr(const char *s, char c);

#endif
