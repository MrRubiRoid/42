/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:55:56 by nbalando          #+#    #+#             */
/*   Updated: 2024/04/02 14:26:17 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	len;

	len = 0;
	while (*c++)
	{
		len++;
	}
	return (len);
}
/*
int main (void)
{
	char	*a;

	a = "a";
	printf("%d\n", ft_strlen(a));
	return (0);
}
*/