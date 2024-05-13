/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:50:47 by codespace         #+#    #+#             */
/*   Updated: 2024/05/12 18:17:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void	test(unsigned int i, char *s)
// {
// 	s[i] = i + 48;
// }
// int	main(void)
// {
// 	char str[] = "abcdefg";
// 	char *s;
// 	int len = ft_strlen(str);

// 	s = calloc(sizeof(char), (ft_strlen(str) + 1));
// 	if (!s)
// 		return (0);
//     printf("before strlcpy%s\n", s);
// 	ft_strlcpy(s, str, (len + 1));
// 	printf("%s\n", s);
// 	ft_striteri(s, test);
// 	printf("%s\n", s);
//     free(s);
// 	return (0);
// }