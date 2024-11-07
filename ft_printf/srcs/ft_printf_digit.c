/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:06:40 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/07 13:20:48 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_print_digit(int nb)
{
	char	*result;
	int		i;

	result = ft_itoa(nb);
	if (!result)
		return (-1);
	i = 0;
	while (result[i])
	{
		if (write(1, &result[i], 1) < 0)
		{
			free(result);
			return (-1);
		}
		i++;
	}
	free(result);
	return (i);
}
