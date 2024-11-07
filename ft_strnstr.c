/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:09 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 18:54:41 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*
size_t ft_strlen(const char *str)
{
    size_t length = 0;

    if (str == NULL)
        return 0;
    while (str[length] != '\0')
        length++;
    return (length);
}
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*
int main() 
{
    const char *haystack = "Hello, world!";
    const char *needle = "world";

    char *result = ft_strnstr(haystack, needle, ft_strlen(haystack));
    if (result) {
        printf("Found: %s\n", result); 
    } else {
        printf("Not found\n");
    }
    return 0;
}
*/
