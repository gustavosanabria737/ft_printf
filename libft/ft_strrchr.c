/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:06:05 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/14 16:39:19 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((char)c == '\0')
	{
		return ((char *)&s[i + 1]);
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(&s[i]));
		}
		i--;
	}
	return (NULL);
}
