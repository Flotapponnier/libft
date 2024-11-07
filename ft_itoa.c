/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:37:12 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 14:37:16 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_number(int nb)
{
	size_t	size;

	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb > 0)
	{
		size++;
		nb = nb / 10;
	}
	return (size);
}

static char	*ft_putresult(int nb, char *result, size_t size)
{
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	size--;
	while (nb > 0)
	{
		result[size] = (nb % 10) + '0';
		nb = nb / 10;
		size--;
	}
	return (result);
}

char	*ft_itoa(int nb)
{
	size_t	size;
	char	*result;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	size = count_number(nb);
	result = (char *)malloc((size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[size] = '\0';
	if (nb == 0)
		result[0] = '0';
	else
		result = ft_putresult(nb, result, size);
	return (result);
}
