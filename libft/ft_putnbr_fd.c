/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 07:49:09 by codespace         #+#    #+#             */
/*   Updated: 2024/05/13 07:49:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putstr_fd("-", fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
	else
	{
		ft_putchar_fd((n + 48), fd);
	}
}

// void	ft_putnbr_fd_fd(int n, int fd)
// {
// 	char	*num;

// 	num = ft_itoa(n);
// 	ft_putstr_fd(num, fd);
// 	free(num);
// }

// int	main(void)
// {
// 	int n = -2147483647;
// 	ft_putnbr_fd(n, 1);
// 	return (0);
// }