/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:52:23 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:25:48 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	copy = (char *)malloc(ft_strlen(s) * sizeof(char));
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