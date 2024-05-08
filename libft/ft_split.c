/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:12:05 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/02 22:29:37 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_words_count(const char *s, char c)
{
	char	*buffer;
	int		word_count;
	int		word_switch;

	word_count = 0;
	word_switch = 0;
	buffer = (char *)s;
	while ((*buffer) != '\0')
	{
		if (*buffer == c)
			word_switch = 0;
		if (*buffer != c && word_switch < 1)
		{
			word_switch = 1;
			word_count++;
		}
		buffer++;
	}
	return (word_count);
}

static void	ft_free_string_array(char **string_array)
{
	int	i;

	i = 0;
	while (string_array[i] != NULL)
	{
		free(string_array[i]);
		i++;
	}
	free(string_array);
}

static char	**ft_split_helper(char *s, char c, char **result, int i)
{
	int	old_i;

	old_i = -1;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			if (old_i < 0)
				old_i = i;
			i++;
		}
		while ((s[i] == c && s[i] != '\0') || i == (int)ft_strlen(s))
		{
			if (old_i >= 0)
				*result++ = ft_substr(s, old_i, (i - old_i));
			if (!result)
			{
				ft_free_string_array(result);
			}
			old_i = -1;
			i++;
		}
	}
	*result = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;

	result = (char **)malloc((ft_words_count(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	ft_split_helper((char *)s, c, result, i);
	return (result);
}

// int	main(void)
// {
// 	char	*test = " it is what it is";
// 	char	a = ' ';
// 	char	** result = ft_split(test, a);
// 	int		i;

// 	i = 0;
// 	while (result[i] != 0)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}

// 	return(0);
// }
