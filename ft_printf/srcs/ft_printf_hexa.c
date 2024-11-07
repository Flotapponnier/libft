/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:08:20 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/07 13:19:46 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static char	*get_hex_digits(int uppercase)
{
	if (uppercase)
		return ("0123456789ABCDEF");
	return ("0123456789abcdef");
}

static int	write_hex(unsigned int nb, char *hexa)
{
	char	hex_digits[8];
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (nb > 0)
	{
		hex_digits[i++] = hexa[nb % 16];
		nb /= 16;
	}
	while (--i >= 0)
	{
		if (write(1, &hex_digits[i], 1) < 0)
			return (-1);
		count++;
	}
	return (count);
}

int	ft_print_hexa(unsigned int nb, int uppercase)
{
	char	*hexa;

	hexa = get_hex_digits(uppercase);
	if (nb == 0)
	{
		if (write(1, "0", 1) < 0)
			return (-1);
		return (1);
	}
	return (write_hex(nb, hexa));
}
