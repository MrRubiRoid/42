/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 20:39:55 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/08 18:11:18 by nbalando         ###   ########.fr       */
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
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != 0 && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int main (int argc, char *argv[])
// {
// 	if (argc != 4)
// 	{
// 		printf("INPUT:%s <dest_string> <src_string> <number_of_bytes>\n",
				// argv[0]);
// 		return (1);
// 	}
// 	char *dest = argv[1];
// 	char *src = argv[2];
// 	int n = ft_atoi(argv[3]);

// 	printf("dest before: %s\n", dest);
// 	ft_strlcat(dest, src, n);
// 	printf("dest  after: %s\n", dest);
// 	printf("return (value: %d\n", ft_strlcat(dest, src, n)));

//     return (0);
// }
