/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:17:19 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 08:09:37 by codespace        ###   ########.fr       */
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
	substring = (char *)ft_calloc((len + 1), sizeof(char));
	if (!substring)
		return (0);
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
// 	char *str = "";
// 	char *result = ft_substr(str, 3, 30);
// 	printf("%s\n", result);
// 	return(0);
// }