/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:00:50 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/06 15:31:15 by nbalando         ###   ########.fr       */
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
	if (buffer < 0)
		buffer = buffer * (-1);
	while (buffer >= 10)
	{
		buffer = buffer / 10;
		result++;
	}
	if (n < 0)
		result++;
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	int		buffer;
	char	*result;

	buffer = n;
	len = num_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	result[len] = '\0';
	if (buffer < 0)
	{
		buffer = buffer * (-1);
		result[0] = '-';
	}
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
// 	printf("%s\n",ft_itoa(-123));
// 	return (0);
// }