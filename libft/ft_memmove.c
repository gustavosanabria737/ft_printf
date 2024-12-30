/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:52:19 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/22 13:50:02 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		while (n--)
		{
			*cdest++ = *csrc++;
		}
	}
	else if (dest > src)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
		{
			*cdest-- = *csrc--;
		}
	}
	return (dest);
}
