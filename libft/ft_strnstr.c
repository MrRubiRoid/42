/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:32:05 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/08 18:26:00 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (little == NULL)
		return ((char *)big);
	b = 0;
	while (big[b] != 0)
	{
		l = 0;
		while (big[b + l] == little[l] && b + l < len)
		{
			if (big[b + l] == 0 && little[l] == 0)
				return ((char *)&big[b]);
			l++;
		}
		if (little[l] == 0)
			return ((char *)&big[b]);
		b++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "can i pet dat dawg";
// 	char b[] = "dawg";
// 	char *c = ft_strnstr(a, b, 19);
// 	printf("%s", c);
// 	return(0);
// }
