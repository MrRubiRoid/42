/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:57:30 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/06 15:25:13 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*merge;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	merge = (char *)malloc(s1_len + s2_len + 1);
	i = 0;
	while (i < s1_len)
	{
		merge[i] = *s1++;
		i++;
	}
	while (i < s1_len + s2_len)
	{
		merge[i] = *s2++;
		i++;
	}
	return (merge);
}
// #include <stdio.h>
// int main (void)
// {
// 	char *str1 = "juicy ";
// 	char *str2 = "🐱";
// 	printf("%s\n", ft_strjoin(str1, str2));
// 	return(0);
// }