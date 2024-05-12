/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:00:50 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 04:49:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	num_len(int n)
{
	int	buffer;
	int	result;

	buffer = n;
	result = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		buffer = buffer * (-1);
		result++;
	}
	while (buffer >= 10)
	{
		buffer = buffer / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	int		buffer;
	char	*result;

	buffer = n;
	len = num_len(n);
	result = (char *)ft_calloc((len + 1), sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (buffer < 0 && buffer > -2147483648)
	{
		buffer = buffer * (-1);
		result[0] = '-';
	}
	if (n == -2147483648)
		return (ft_memcpy(result, "-2147483648", 12));
	while (buffer > 0 && len != 0)
	{
		result[len - 1] = (buffer % 10) + '0';
		buffer = buffer / 10;
		len--;
	}
	return (result);
}
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-123));
// 	char *res = ft_itoa(0);
// 	printf("%s\n", res);
// 	return (0);
// }