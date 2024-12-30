/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:54:47 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/22 16:56:45 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

static size_t	get_end(const char *s1, const char *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (end > start && is_in_set(s1[end], set))
	{
		end--;
	}
	return (end);
}

static size_t	get_start(const char *s1, const char *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
	{
		start++;
	}
	return (start);
}

static char	*get_trimmed(char *trimmed, const char *s1,
							size_t end, size_t start)
{
	int	i;
	int	len;

	len = end + start + 1;
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = get_start(s1, set);
	if (s1[start] == '\0')
	{
		trimmed = (char *)malloc(1);
		if (trimmed == NULL)
		{
			return (NULL);
		}
		trimmed[0] = '\0';
		return (trimmed);
	}
	end = get_end(s1, set, start);
	trimmed = (char *)malloc((end - start + 2) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	return (get_trimmed(trimmed, s1, end, start));
}
