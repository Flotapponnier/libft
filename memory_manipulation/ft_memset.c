/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:10:36 by ftapponn          #+#    #+#             */
/*   Updated: 2024/11/22 15:10:38 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
