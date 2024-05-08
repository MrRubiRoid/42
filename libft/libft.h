/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <nbalando@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:42:29 by nbalando          #+#    #+#             */
/*   Updated: 2024/05/06 16:19:01 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIB_FT
# define MY_LIB_FT

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

size_t			ft_strlen(const char *s);

void			*ft_memset(void *s, int c, size_t n);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t);

void			*ft_memmove(void *dest, const void *src, size_t n);

size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				ft_toupper(int c);

int				ft_tolower(int c);

char			*ft_strchr(const char *s, int c);

char			*ft_strrchr(const char *s, int c);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

char			*ft_strnstr(const char *big, const char *little, size_t len);

int				ft_atoi(const char *str);

void			*ft_calloc(size_t nmemb, size_t size);

char			*ft_strdup(const char *s);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);

char			*ft_itoa(int n);

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif