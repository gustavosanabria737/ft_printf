/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:52:23 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/13 14:10:11 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*s2;

	i = 0;
	s2 = (const unsigned char *) s;
	while (i < n)
	{
		if (s2[i] == (unsigned char) c)
			return ((void *)&s2[i]);
		i++;
	}
	return (NULL);
}
