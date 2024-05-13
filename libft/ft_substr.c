/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:17:19 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 20:58:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substring = (char *)ft_calloc((len + 1), sizeof(char));
	if (!substring)
		return (0);
	i = 0;
	while (i < len)
	{
		substring[i] = s[i + (int)start];
		i++;
	}
	return (substring);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_substr("", 0, 0));
// 	printf("%s\n", ft_substr("", 0, 1));
// 	printf("%s\n", ft_substr("", 1, 1));
// 	printf("%s\n", ft_substr("hola", -1, 0));
// 	printf("%s\n", ft_substr("hola", 0, -1));
// 	printf("%s\n", ft_substr("hola", -1, -1));
// 	printf("%s\n", ft_substr("hola", 0, 0));
// 	printf("%s\n", ft_substr("hola", 0, 1));
// 	printf("%s\n", ft_substr("hola", 0, 3));
// 	printf("%s\n", ft_substr("hola", 0, 4));
// 	printf("%s\n", ft_substr("hola", 0, 5));
// 	printf("%s\n", ft_substr("hola", 2, 0));
// 	printf("%s\n", ft_substr("hola", 2, 1));
// 	printf("%s\n", ft_substr("hola", 2, 2));
// 	printf("%s\n", ft_substr("hola", 2, 3));
// 	printf("%s\n", ft_substr("hola", 2, 30));
// 	printf("%s\n", ft_substr("hola", 3, 0));
// 	printf("%s\n", ft_substr("hola", 3, 1));
// 	printf("%s\n", ft_substr("hola", 3, 2));
// 	printf("%s\n", ft_substr("hola", 4, 0));
// 	printf("%s\n", ft_substr("hola", 4, 1));
// 	printf("%s\n", ft_substr("hola", 4, 20));
// 	printf("%s\n", ft_substr("hola", 5, 2));
// 	return(0);
// }