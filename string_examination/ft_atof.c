/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:13:55 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/22 14:29:24 by ftapponn         ###   LAUSANNE.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f'
		|| c == '\v');
}

static float	ft_get_sign(const char **str)
{
	float	sign;

	sign = 1.0f;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1.0f;
		(*str)++;
	}
	return (sign);
}

static float	ft_convert_integer_part(const char **str)
{
	float	result;

	result = 0.0f;
	while (**str >= '0' && **str <= '9')
	{
		result = result * 10.0f + (**str - '0');
		(*str)++;
	}
	return (result);
}

static float	ft_convert_decimal_part(const char **str)
{
	float	result;
	float	decimal_place;

	result = 0.0f;
	decimal_place = 10.0f;
	if (**str == '.')
	{
		(*str)++;
		while (**str >= '0' && **str <= '9')
		{
			result = result + (**str - '0') / decimal_place;
			decimal_place *= 10.0f;
			(*str)++;
		}
	}
	return (result);
}

float	ft_atof(const char *str)
{
	float	result;
	float	sign;

	result = 0.0f;
	while (ft_is_space(*str))
		str++;
	sign = ft_get_sign(&str);
	result = ft_convert_integer_part(&str);
	result += ft_convert_decimal_part(&str);
	result *= sign;
	return (result);
}
