/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:42:45 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/11 19:05:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 == *str2 && --n != 0)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

// #include <stdio.h>

// int main (void)
// {
// 	char *a = "atoms\0\0\0\0";
//     char *b = "atoms\0abc";
// 	int 	c = 8;
// 	printf("%d\n", ft_memcmp(a, b, c));
// 	return (0);
// }