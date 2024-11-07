/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:57:20 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 15:57:26 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}

/*
int main()
{
    char buffer[50];

    ft_memset(buffer, 'B', 10);
    buffer[10] = '\0';
    printf("Buffer after ft_memset with B: '%s'\n", buffer); 
    ft_memset(buffer, 'A', 10);
    buffer[10] = '\0';
    printf("Buffer after ft_memset with 'A': '%s'\n", buffer); 
    return 0;
}
*/
