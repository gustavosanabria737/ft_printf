/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:17:03 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/25 00:06:45 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*get_substr(char const *s, size_t len, unsigned int start)
{
	size_t	i;
	char	*substr;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (s == NULL)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
		{
			return (NULL);
		}
		substr[0] = '\0';
		return (substr);
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	return (get_substr(s, len, start));
}
