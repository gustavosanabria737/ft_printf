/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsanabri <gsanabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:01:38 by gsanabri          #+#    #+#             */
/*   Updated: 2024/10/24 23:34:38 by gsanabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*do_while( size_t length_to_find, const char *str,
					const char *to_find, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= (len - length_to_find))
	{
		if (ft_strncmp(&str[i], to_find, length_to_find) == 0)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	length_little;
	size_t	length_big;

	length_little = ft_strlen(little);
	length_big = ft_strlen(big);
	if (length_little == 0)
		return ((char *)big);
	if (length_big < length_little)
		return (NULL);
	if (length_little > len)
	{
		return (NULL);
	}
	return (do_while(length_little, big, little, len));
}

//#include <stdio.h>
//
//int main(void)
//{
//	char *str1 = "Hola mundo, esto es un texto guay";
//	char *str2 = NULL;
//
//	printf("Custom: %s\n", ft_strnstr(NULL, "Hola", 50));
//}
