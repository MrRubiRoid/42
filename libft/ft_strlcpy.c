/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:50:04 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/13 13:25:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;

	if (size)
	{
		i = 0;
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main ()
// {
// 	char *dest = "123";
// 	char *src = "abc";
// 	size_t i = 5;
// 	size_t i1 = ft_strlcpy(dest, src, i);
// 	printf("ft_strlcpy: %ld\n", i1);
// 	// size_t i2 = strlcpy(dest, src, i);
// 	// printf("strlcpy: %ld\n", i2);
//     return (0);
// }