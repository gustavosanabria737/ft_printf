/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:41:12 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/24 23:41:29 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (const char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((const char)c == '\0')
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}
