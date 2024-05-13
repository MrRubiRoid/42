/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:57:30 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/13 12:30:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*merge;
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	merge = (char *)ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (!merge)
		return (0);
	ft_strlcpy(merge, (char *)s1, s1_len + 1);
	ft_strlcat(merge, (char *)s2, s1_len + s2_len + 1);
	return (merge);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str1 = "juicy ";
// 	char *str2 = "123";
// 	printf("%s\n", ft_strjoin(str1, str2));
// 	return (0);
// }