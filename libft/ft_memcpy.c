/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:10:16 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/24 23:27:09 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cpydest;
	const unsigned char	*cpysrc;

	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	cpydest = (unsigned char *)dest;
	cpysrc = (const unsigned char *)src;
	while (i < n)
	{
		cpydest[i] = cpysrc[i];
		i++;
	}
	return (dest);
}
