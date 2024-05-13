/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:18:00 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 15:24:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void	ft_print_result(char const *s)
// {
// 	int	len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*string;

	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	string = (char *)ft_calloc((len + 1), sizeof(char));
	if (!string)
		return (NULL);
	i = 0;
	while (i < len)
	{
		string[i] = f(i, s[i]);
		i++;
	}
	return (string);
}

// char	mapi(unsigned int i, char c)
// {
// 	static int	indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// }

// int	main(int argc, const char *argv[])
// {
// 	char	*str;
// 	char	*strmapi;
// 	char	*test;
// 	int i = ft_strlen(test) + 1;

// 	test = "LoReM iPsUm";
// 	str = (char *)calloc(sizeof(*str), i);
// 	ft_strlcpy(str, test, i);
// 	strmapi = ft_strmapi(str, &mapi);
// 	printf("%s\n", strmapi);
// 	ft_print_result(strmapi);
// 	if (strmapi == str)
// 		ft_print_result("\nA new string was not returned");
// 	if (strmapi[i-1] != '\0')
// 		ft_print_result("\nString is not null terminated");
// 	return (0);
// }

// char test(unsigned int n, char c)
// {
// 	c = (char)(n + '1');
// 	return (c);
// }
// int main (void)
// {
// 	char *c = "qwerty";
// 	printf("%s\n", c);
// 	printf("%s\n", ft_strmapi(c,  test));
// 	return (0);
// }
