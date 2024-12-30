/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:15:34 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/08 13:18:39 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset( void *s, int c, size_t n )
{
	unsigned char	*s1;
	unsigned char	cc;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		s1[i] = cc;
		i++;
	}
	return ((void *)&s1[0]);
}
