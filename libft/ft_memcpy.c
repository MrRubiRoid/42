/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:28:42 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:29:50 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (0);
	if (dest == src || !n)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>

int main (int argc, char *argv[])
{
    int n = ft_atoi(argv[2]);
    unsigned char d[(size_t)atoi(argv[2])+1];

    if(argc !=3)
    {
        printf("INPUT:      %s <string> <number_of_bytes>\n", argv[0]);
        return (1);
    }
    ft_memcpy(d, argv[1], (size_t)atoi(argv[2]));
    printf("%s\n", d);
    return (0);
}*/