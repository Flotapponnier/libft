/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftapponn <ftapponn@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:58:37 by ftapponn          #+#    #+#             */
/*   Updated: 2024/10/08 15:59:12 by ftapponn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strchr(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;
	int		in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**free_split(char **result, size_t j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
	return (NULL);
}

static char	*allocate_and_copy(const char *s, size_t *i, char c)
{
	char	*sub_str;
	size_t	k ;
	size_t	len;

	k = 0;
	len = ft_count_strchr(s + *i, c);
	sub_str = malloc((len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	while (s[*i] && s[*i] != c)
		sub_str[k++] = s[(*i)++];
	sub_str[k] = '\0';
	return (sub_str);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**result;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	result = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = allocate_and_copy(s, &i, c);
			if (!result[j])
				return (free_split(result, j));
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
