/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:01:24 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/22 13:50:02 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size > 0 && nmemb > __SIZE_MAX__ / size)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr)
	{
		ft_memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
