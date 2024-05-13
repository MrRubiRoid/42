/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:12:05 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/13 05:31:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	ft_words_count(const char *s, char c)
// {
// 	char	*buffer;
// 	int		word_count;
// 	int		word_switch;

// 	word_count = 0;
// 	word_switch = 0;
// 	buffer = (char *)s;
// 	while ((*buffer) != '\0')
// 	{
// 		if (*buffer == c)
// 			word_switch = 0;
// 		if (*buffer != c && word_switch < 1)
// 		{
// 			word_switch = 1;
// 			word_count++;
// 		}
// 		buffer++;
// 	}
// 	return (word_count);
// }

// static void	ft_free_string_array(char **string_array)
// {
// 	int	i;

// 	i = 0;
// 	while (string_array[i] != NULL)
// 	{
// 		free(string_array[i]);
// 		i++;
// 	}
// 	free(string_array);
// }

// static char	**ft_split_helper(char *s, char c, char **result, int i)
// {
// 	int	word;
// 	int	old_i;

// 	word = -1;
// 	old_i = -1;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] != c && s[i] != '\0')
// 		{
// 			if (old_i < 0)
// 				old_i = i;
// 			i++;
// 		}
// 		while ((s[i] == c && s[i] != '\0') || i == (int)ft_strlen(s))
// 		{
// 			if (old_i >= 0)
// 			{
// 				result[++word] = ft_substr(s, old_i, (i - old_i));
// 				if (!result[word])
// 				{
// 					ft_free_string_array(result);
// 					return (NULL);
// 				}
// 			}
// 			old_i = -1;
// 			i++;
// 		}
// 	}
// 	return (result);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**result;

// 	result = (char **)ft_calloc((ft_words_count(s, c) + 1), sizeof(char *));
// 	if (!s || !result)
// 		return (NULL);
// 	return (ft_split_helper((char *)s, c, result, 0));
// }

// int	main(void)
// {
// 	char	*test = "is        ";
// 	char	a = ' ';
// 	char	** result = ft_split(test, ' ');
// 	int		i;

// 	i = 0;
// 	while (result[i] != 0)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}

// 	return(0);
// }

//

#include "libft.h"

static int	ft_words_count(char *s, char c)
{
	int	word_count;
	int	flag;

	word_count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (*s != c && !flag)
		{
			flag = 1;
			word_count++;
		}
		s++;
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

static int	word_len(char *s, char delim)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != delim)
		i++;
	return (i);
}

static char	**ft_split_helper(char *s, char c, char **result)
{
	int	len;
	int	word;

	word = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			len = word_len(s, c);
			result[word] = ft_substr(s, 0, len);
			if (result[word++] == NULL)
			{
				ft_free_string_array(result);
				return (NULL);
			}
			s += len - 1;
		}
		s++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words_count;

	words_count = ft_words_count((char *)s, c);
	result = (char **)ft_calloc((words_count + 1), sizeof(char *));
	if (!s || !result)
		return (NULL);
	return (ft_split_helper((char *)s, c, result));
}

// int	main(void)
// {
// 	char	*test = "is        ";
// 	char	a = ' ';
// 	char	** result = ft_split(test, ' ');
// 	int		i;

// 	i = 0;
// 	while (result[i] != 0)
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}

// 	return(0);
// }