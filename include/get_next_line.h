/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:26:18 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/25 16:28:11 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

/**
 * @brief read a line from a fildes
 * check if line variable (NULL or '\0')
 * is an empty string and no newline in buffer
 * EOF reached or file is empty
 * @param fd file descriptor to read from
 * @return line read from file descriptor
 */
char		*get_next_line(int fd);

/**
 * @brief read line while stash has no newline 
 * @param buf to copy into from stash
 * @param fd to read from
 * @param count for line index/read bytes
 * @param line address to store line
 * @return line read from file descriptor
 */
char		*read_line(char *buf, int fd, int *counter, char **line);

/**
 * @brief copy content into new buffer, free old using free_buf
 * implements parts of substr funcionality for copying buffer
 * @param buffer to replace
 * @return new buffer, NULL on failure
 */
void		clean_buffer(char *buffer);
char		*check_n_free(char *line);

/**
 * @brief sets n characters of a String to 0
 * @return char* zeroed string
 */
char		*str_bzero(char *s, int n);

/**
 * @brief find the index of the first newline character in a string
 * @return index of newline character, strlen if not found
 */
int			eol(char *s);
#endif
