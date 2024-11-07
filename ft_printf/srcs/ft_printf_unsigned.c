/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:11:43 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/07 13:20:40 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_print_unsigned(unsigned int n)
{
	char	digit[10];
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (n == 0)
		digit[i++] = '0';
	while (n > 0)
	{
		digit[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
	{
		if (write(1, &digit[i], 1) < 0)
			return (-1);
		count++;
	}
	return (count);
}
