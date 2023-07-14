/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschwabe <jschwabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:08:13 by jschwabe          #+#    #+#             */
/*   Updated: 2023/07/14 16:36:11 by jschwabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_zu(size_t n, int *size)
{
	int	check;

	check = put_nbr(n, "0123456789", 10);
	if (check < 0)
		return (FAIL);
	*size += check;
	return (check);
}

/*
@brief formats integer for printing
@param n maintains org val
@return length of printed string (-1 if failure)
*/
static int	format_di(long n)
{
	char	*str;
	int		len;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	len = put_str(str);
	free(str);
	return (len);
}

/*
@brief formats for printing memory address of ptr
@param ptr to get mem for
@return length of printing (-1 if failure)
*/
static int	format_p(size_t *ptr)
{
	int		len;

	len = put_str("0x");
	if (len < 2)
		return (FAIL);
	len += put_nbr((size_t)ptr, "0123456789abcdef", 16);
	return (len);
}

/*check specifier for formatting functions*/
static int	check_formatter(va_list args, int specifier, int *size)
{
	int	check;

	check = 0;
	if (specifier == 'c')
		check = put_char(va_arg(args, int));
	if (specifier == 's')
		check = put_str(va_arg(args, char *));
	if (specifier == 'p')
		check = (format_p(va_arg(args, void *)));
	if ((specifier == 'd') || (specifier == 'i'))
		check = format_di((long)va_arg(args, int));
	if (specifier == 'u')
		check = put_nbr(va_arg(args, unsigned int), "0123456789", 10);
	if (specifier == 'x')
		check = put_nbr(va_arg(args, unsigned int), "0123456789abcdef", 16);
	if (specifier == 'X')
		check = put_nbr(va_arg(args, unsigned int), "0123456789ABCDEF", 16);
	if (specifier == '%')
		check = put_char('%');
	if (check < 0)
		return (FAIL);
	return (*size += check);
}

/*
@brief basic functionality of printf
@param input, formatted input
@return length (-1 if failure)
*/
int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			size;

	size = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == MARKER && *(format + 1) == 'z' && (*(format + 2) == 'u'))
		{
			if (format_zu(va_arg(args, size_t), &size) < 0)
				return (-1);
			format += 2;
		}
		else if (*format == MARKER)
		{
			if (*(format + 1) && check_formatter(args, *(++format), &size) < 0)
				return (-1);
		}
		else if (put_char(*format) <= FAIL)
			return (-1);
		else
			size++;
		format++;
	}
	return (va_end(args), size);
}
