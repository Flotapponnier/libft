/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:00:20 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 16:05:10 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

/*
void to_uppercase(unsigned int index, char *c)
{
    *c = (char)toupper((unsigned char)*c);
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(f)(i, &s[i]);
		i++;
	}
}

/*
int main()
{
    char str[] = "hello, world!";
    printf("Original string: %s\n", str);
    ft_striteri(str, to_uppercase);
    printf("Modified string: %s\n", str);
    return 0;
}
*/
