/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:50:33 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/13 17:25:41 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	i;
	size_t			cpy_len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		if (len >= size)
			cpy_len = size - 1;
		else
			cpy_len = len;
		while (i < cpy_len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
