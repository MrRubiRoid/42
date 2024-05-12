/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:52:23 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 04:45:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	copy = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!copy)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *str = "you shall not pass";
// 	printf("%s\n", str);
// 	printf("%s\n", ft_strdup(str));
// 	return(0);
// }