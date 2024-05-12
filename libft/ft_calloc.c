/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:40:01 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/12 07:03:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	int		nbytes;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	nbytes = nmemb * size;
	if (nbytes == 0)
		nbytes = 1;
	memory = malloc(nbytes);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, nbytes);
	return (memory);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
// 	int size = 0;
// 	int *junk = 0;
// 	srand( time(0) );

// 	for (int i = 0; i < 1000; i++)
// 	{
// 		size = rand() % 16111;
// 		junk = malloc(size * sizeof(int));
// 		for (int j = 0; j < size; j++)
// 		{
// 			junk[j] = rand();
// 		}
// 	}
// 	free(junk);

// 	char* wtf;
// 	wtf = malloc(1000 * sizeof(int));
// 	printf("malloc:\n");
// 	for (size_t i = 0; i < 1000; i++)
// 		printf("%d", wtf[i]);
// 	printf("\n");
// 	free(wtf);

// 	wtf = ft_calloc(1000, sizeof(int));
// 	printf("calloc:\n");
// 	for (size_t i = 0; i < 1000; i++)
// 		printf("%d", wtf[i]);
// 	printf("\n");
// 	free(wtf);

// 	return(0);
// }

// #include <stdio.h>

// int main(int argc, char* argv[])
// {
// 	int i;
// 	size_t len;
// 	char *str;

// 	if (argc != 2)
// 		return (EXIT_FAILURE);
// 	len = (size_t) ft_atoi(argv[1]);
// 	len = 12;
// 	str = ft_calloc(len, sizeof(char) );
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("At position i: %d the value is %d\n", i, str[i]);
// 		i++;
// 	}
// 	return(0);
// }