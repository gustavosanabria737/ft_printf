/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:14:58 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/13 15:30:37 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cast_s1;
	const unsigned char	*cast_s2;

	cast_s1 = (const unsigned char *) s1;
	cast_s2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (cast_s1[i] > cast_s2[i])
			return (1);
		if (cast_s1[i] < cast_s2[i])
			return (-1);
		i++;
	}
	return (0);
}
