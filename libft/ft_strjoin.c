/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:57:56 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/13 17:25:36 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;	
	int			j;
	char		*new_string;

	i = 0;
	new_string = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (new_string)
	{
		while (i < ft_strlen(s1))
		{
			new_string[i] = s1[i];
			i++;
		}
		j = 0;
		while (i < (ft_strlen(s1) + ft_strlen(s2)))
		{
			new_string[i++] = s2[j++];
		}
		new_string[i] = '\0';
	}
	return (new_string);
}
