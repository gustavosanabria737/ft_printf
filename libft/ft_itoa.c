/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:30:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 17:30:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*get_min_str(void)
{
	char	*str;

	str = (char *)malloc(12);
	if (str)
	{
		str[0] = '-';
		str[1] = '2';
		str[2] = '1';
		str[3] = '4';
		str[4] = '7';
		str[5] = '4';
		str[6] = '8';
		str[7] = '3';
		str[8] = '6';
		str[9] = '4';
		str[10] = '8';
		str[11] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_negative;
	char	*str;

	len = get_num_len(n);
	is_negative = (n < 0);
	if (n == -2147483648)
		return (get_min_str());
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (is_negative)
	{
		str[0] = '-';
		n = -n;
	}
	while (len-- > is_negative)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
