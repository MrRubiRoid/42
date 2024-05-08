/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:55:56 by nbalando          #+#    #+#             */
/*   Updated: 2024/04/02 14:26:17 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int c, size_t n)
{
	unsigned char	*buffer;

	buffer = (unsigned char *)array;
	while (n--)
		*buffer++ = (unsigned char)c;
	return (array);
}
/*
#include <stdio.h>

int main (void)
{
	char	string[];
	char	*string2;

	string[] = "abcdefg";
	string2 = ft_memset(&string, 'A', 5);
	printf("%s\n", string2);
	return (0);
}
*/