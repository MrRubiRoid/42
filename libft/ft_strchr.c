/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:12:02 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/13 05:54:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	chr = (unsigned char)(c % 256);
	while (*s)
	{
		if (*s == (char)chr)
			return ((char *)s);
		s++;
	}
	if (chr == 0)
		return ((char *)s);
	return (NULL);
}
// #include <stdio.h>
// int main(void)
// {
// 	const char *a = "mthrfckr";
// 	char *ptr = ft_strchr(a, 99);
// 	printf("%s\n", ptr);
// 	return(0);
// }