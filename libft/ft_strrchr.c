/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:11:48 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:29:08 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*whatever;

	whatever = (char *)s;
	while (*s)
		s++;
	while (s > whatever)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *a = "mthrfckr";
// 	char *ptr = ft_strrchr(a, 't');
// 	printf("%s\n", ptr);
// 	return(0);
// }