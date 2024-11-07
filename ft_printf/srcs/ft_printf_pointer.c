/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:12:38 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/07 13:20:05 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void	print_hex_digit(unsigned long nb, int uppercase, int *count)
{
	static char	*hexa_low;
	static char	*hexa_up;

	hexa_low = "0123456789abcdef";
	hexa_up = "0123456789ABCDEF";
	if (nb >= 16)
		print_hex_digit(nb / 16, uppercase, count);
	if (uppercase)
		write(1, &hexa_up[nb % 16], 1);
	else
		write(1, &hexa_low[nb % 16], 1);
	(*count)++;
}

int	ft_print_pointer(void *ptr)
{
	int				count;
	unsigned long	ptr_adress;

	ptr_adress = (unsigned long)ptr;
	count = 0;
	if (write(1, "0x", 2) < 0)
		return (-1);
	count += 2;
	if (ptr == 0)
		count += write(1, "0", 1);
	else
		print_hex_digit(ptr_adress, 0, &count);
	return (count);
}
