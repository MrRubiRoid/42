/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:17:19 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/06 14:58:43 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	substring = (char *)malloc(len + 1);
	if (!s || !substring)
		return (NULL);
	i = 0;
	while (i < len && *s != '\0')
	{
		substring[i] = s[i + (int)start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *str = "0123456789abcdefghij";
// 	char *result = ft_substr(str, 3, 30);
// 	printf("%s\n", result);
// 	return(0);
// }