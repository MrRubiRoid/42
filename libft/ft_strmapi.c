/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:18:00 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 06:46:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	if (!s || !f)
		return (NULL);
	string = (char *)malloc(ft_strlen(s) * sizeof(char *));
	if (!string)
		return (NULL);
	i = 0;
	while (string[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = 0;
	return (string);
}
