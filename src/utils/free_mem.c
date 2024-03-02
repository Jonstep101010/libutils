/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:48:30 by jschwabe          #+#    #+#             */
/*   Updated: 2024/03/02 20:48:54 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief free and set pointer to NULL
 * @warning use address of pointer
 * @param p address of pointer
 */
void	free_null(void *p)
{
	void	**ptr;

	if (!p)
		return ;
	ptr = (void **)p;
	if (*ptr)
		free(*ptr);
	*ptr = NULL;
}
