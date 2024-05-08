/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 21:50:04 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:29:16 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned int	i;

	if (destsize)
	{
		i = 0;
		while (i < (destsize - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int main (int argc, char *argv[])
// {
// 	if (argc != 4)
// 	{
// 	printf("INPUT:%s <dest_string> <src_string> <number_of_bytes>\n", argv[0]);
// 	return (1);
// 	}

// 	int n = ft_atoi(argv[3]);

// 	char *dest = argv[1];
// 	char *src = argv[2];

// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	printf("%d\n", n);
// 	printf("%lu\n", strlcpy(dest, src, n));
//     printf("%s\n\n", dest);
// 	printf("%s\n", src);

// 	char *dest2 = argv[1];
// 	char *src2 = argv[2];

// 	printf("%s\n", dest2);
// 	printf("%s\n", src2);
// 	printf("%d\n", n);
// 	printf("%lu\n", ft_strlcpy(dest2, src2, n));
//     printf("%s\n", dest2);
// 	printf("%s\n", src2);

//     return (0);
// }