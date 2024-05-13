/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:39:55 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/13 13:48:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	if (!dest && src && !size)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] != 0 && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (src_len + dest_len);
}
// #include <string.h>
// #include <bsd/string.h>
// int main (void)
// {
// 	char *dest = NULL;
// 	char *src = "qwerty";
// 	int i = 0;
// 	printf("%d, %s, %s\n", ft_strlcat(dest, src, i), dest, src);
// 	printf("%d, %s, %s\n", (int)strlcat(dest, src, i), dest, src);
// 	return(0);
// }
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
// FOR TESTING WITH AC AV
// int main (int argc, char *argv[])
// {
// 	if (argc != 4)
// 	{
// 		printf("INPUT:%s <dest_string> <src_string> <number_of_bytes>\n",
// 				argv[0]);
// 		return (1);
// 	}
// 	char *dest = argv[1];
// 	char *src = argv[2];
// 	int n = ft_atoi(argv[3]);

// 	printf("dest before: %s\n", dest);
// 	printf("dest  after: %s\n", dest);
// 	printf("return (value: %d\n", ft_strlcat(dest, src, n)));

//     return (0);
// }

// #include <stdlib.h>
// #include <unistd.h>
// #include <string.h>
// }
