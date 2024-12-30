/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:05:28 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/25 00:09:23 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*free_all(char **strs)
{
	size_t	i;

	i = 0;
	if (!strs)
		return (NULL);
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i++] = s[start++];
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_start;
	size_t	i;
	size_t	j;

	word_start = 0;
	j = 0;
	i = -1;
	if (!s)
		return (NULL);
	result = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word_start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[j++] = word_dup(s, word_start, i + 1);
			if (!result[j - 1])
				return (free_all(result));
		}
	}
	return (result);
}
