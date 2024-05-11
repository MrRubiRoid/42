/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:39:55 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/11 00:39:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_len = 0;
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
// 	char dest[20] = "123\0";
// 	char *src = "qwerty";
// 	int i = 20;
// 	printf("%d\n", ft_strlcat(dest, src, i));
// 	printf("%d\n", (int)strlcat(dest, src, i));
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