/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:42:45 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:29:52 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while ((str1[i] != 0 || str2[i] != 0) && str1[i] == str2[i] && --n != 0)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

// #include <stdio.h>

// int main (void)
// {
// 	char 	*a = "12346";
// 	char	*b = "12346";
// 	int 	c = 5;
// 	printf("%d\n", ft_memcmp(a, b, c));
// 	return (0);
// }