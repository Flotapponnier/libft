/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:24:08 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 16:24:10 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*
char to_lowercase(unsigned int index, char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

size_t ft_strlen(const char *s)
{
    size_t length = 0;
    while (s[length])
        length++;
    return length;
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
int main()
{
    char str[] = "HELLO, WORLD!";

    printf("Original string: %s\n", str);
    char *result = ft_strmapi(str, to_lowercase);
    if (result)
    {
        printf("Modified string: %s\n", result);
        free(result);
    }
    return (0);
}
*/
