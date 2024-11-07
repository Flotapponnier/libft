/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:06:41 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 16:06:42 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = 0;
	while (dest[len_dest] && len_dest < n)
		len_dest++;
	if (len_dest == n)
		return (len_src + n);
	while (src[i] && (len_dest + i) < (n - 1))
	{
		dest[i + len_dest] = src[i];
		i++;
	}
	if (len_dest + i < n)
		dest[i + len_dest] = '\0';
	return (len_src + len_dest);
}
