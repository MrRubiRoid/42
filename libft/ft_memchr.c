/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:43:57 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/13 12:12:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *)s;
	while (n--)
	{
		if (*s_ptr == (unsigned char)c)
			return ((void *)s_ptr);
		s_ptr++;
	}
	return (NULL);
}

// test for c = '\0'!!

// #include <stdio.h>

// int main(void)
// {
// 	void *ptr;
// 	const char *a = "mthrfckr";
// 	ptr = ft_memchr(a, 'f', 4);
// 	printf("%s\n", (char*)ptr);
// 	return(0);
// }