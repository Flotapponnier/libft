/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:22:21 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 16:22:22 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	last_occurence;

	i = 0;
	last_occurence = -1;
	while (str[i])
	{
		if (str[i] == (char)c)
			last_occurence = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	if (last_occurence == -1)
		return (NULL);
	return ((char *)(str + last_occurence));
}
