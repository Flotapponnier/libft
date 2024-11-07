/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:26:31 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/07 13:20:42 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_find_format(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_print_char(va_arg(ap, int));
	else if (c == 's')
		count = ft_print_string(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count = ft_print_digit(va_arg(ap, int));
	else if (c == 'x')
		count = ft_print_hexa(va_arg(ap, unsigned int), 0);
	else if (c == 'X')
		count = ft_print_hexa(va_arg(ap, unsigned int), 1);
	else if (c == 'u')
		count = ft_print_unsigned(va_arg(ap, unsigned int));
	else if (c == 'p')
		count = ft_print_pointer(va_arg(ap, void *));
	else if (c == '%')
		count = write(1, "%", 1);
	return (count);
}

static int	ft_process_format(const char *format, int *i, va_list ap)
{
	int	result;
	int	count;

	count = 0;
	while (format[*i])
	{
		if (format[*i] == '%')
		{
			(*i)++;
			result = ft_find_format(format[*i], ap);
			if (result == -1)
				return (-1);
			count += result;
		}
		else
		{
			result = write(1, &format[*i], 1);
			if (result == -1)
				return (-1);
			count += result;
		}
		(*i)++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	va_start(ap, format);
	count = ft_process_format(format, &i, ap);
	va_end(ap);
	return (count);
}
