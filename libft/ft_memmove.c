/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:55:56 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/06 15:16:08 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
		return (dest);
	}
	else
		return (ft_memcpy(d, s, n));
}
/*
#include <stdio.h>

int	main(int argc, char* argv[])
{
	int	n;
    unsigned char d[(size_t)atoi(argv[2])+1];

    n = ft_atoi(argv[2]);
    if(argc !=3)
    {
        printf("INPUT:      %s <string> <number_of_bytes>\n", argv[0]);
        return (1);
    }
    ft_memcpy(d, argv[1], (size_t)atoi(argv[2]));
    printf("%s\n", d);
    return (0);
}
*/