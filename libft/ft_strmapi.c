/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:18:00 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/08 15:54:34 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char

	char *
	ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *string;

	if (!s || !f)
		return (NULL);
	string = (char)malloc(strlen(s) * sizeof(char *));
	if (!string)
		return (NULL);
	i = 0;
	while (string[i])
	{
		string[i++] = f(i, s[i]);
		// i++;
	}
	string[i] = 0;
	return (string);
}

int main(void)
{

	ft_strmapi("qwerty", "b");
	return (0);
}