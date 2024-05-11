/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:52:58 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/11 00:35:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] != 0 && s2[i] != 0) && s1[i] == s2[i] && --n != 0)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>

// int main (void)
// {
// 	char 	*a = "12346";
// 	char	*b = "12345";
// 	int 	c = 0;
// 	printf("%d\n", ft_strncmp(a, b, c));
// 	return (0);
// }