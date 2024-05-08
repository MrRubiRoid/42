/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:55:56 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/08 18:08:17 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {

// 	// int	i;

// 	// i = 0;
// 	// while (i < ft_strlen(argv[1]))
// 	// {
// 	// 	printf("%d\n", ft_isalnum(argv[1][i]));
// 	// 	i++;
// 	// }
// 	return (0);
// }
