/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:36:46 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/13 17:21:36 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = malloc(len * sizeof(char));
	if (ptr)
	{
		i = 0;
		while (i < len - 1)
		{
			ptr[i] = s[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
