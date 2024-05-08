/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:55:56 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:27:22 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>

int main (void)
{
	char	a;

	a = '+';
	printf("%c\n", ft_tolower(a));
	return (0);
}
*/