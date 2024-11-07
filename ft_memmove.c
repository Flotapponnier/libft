/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:02:59 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 18:58:04 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*
void *ft_memcpy(void *dest, const void *src, size_t n) {
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	if (dest == NULL) {
		return NULL;
	}

	for (size_t i = 0; i < n; i++) {
		d[i] = s[i];
	}

	return dest;
}
*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	char	*dest;

	tmp = (char *)src;
	dest = (char *)dst;
	if (tmp < dest)
	{
		while (n--)
			dest[n] = tmp[n];
	}
	else
		ft_memcpy(dest, tmp, n);
	return (dst);
}

/*
int main() {
	char str[] = "this jgkf good";
	ft_memmove(str + 4, str + 9, 10);
	printf("Modified string: %s\n", str); 
	char str2[] = "this good jgkf";
	ft_memmove(str2 + 9, str2 + 14, 1);
	printf("Modified string: %s\n", str2);
	char str3[] = "Hello, World!";
	char str4[20] = "Goodbye!";
	ft_memmove(str4 + 7, str3, 5);
	printf("Modified string: %s\n", str4);
	return (0);
}
*/
